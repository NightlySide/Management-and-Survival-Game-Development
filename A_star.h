#ifndef A_STAR_H
#define A_STAR_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#define X 4
#define Y 8

using namespace std;

int getMinScore(map<int, int> openList)
{
    int min = 100000;
    int index = 0;
    for(map<int,int>::iterator it = openList.begin(); it != openList.end(); ++it)
        if(openList.at(it->first)<=min)
        {
            min = openList.at(it->first);
            index = it->first;
        }
    return index;
}

bool isMultiple(int n, int ref) {return n%ref==0;}

vector<int> getAdjSquares(vector<int> graphList, vector<int> closeList, int currentSquare, vector<bool> passableTiles)
{
    vector<int> adj_squares;
    try{
        if(find(passableTiles.begin(), passableTiles.end(), graphList.at(currentSquare+1))!=passableTiles.end() && !isMultiple(currentSquare+1, X))
            adj_squares.push_back(currentSquare+1);
    }catch(const exception & e){}
    try{
        if(find(passableTiles.begin(), passableTiles.end(), graphList.at(currentSquare-1))!=passableTiles.end() && !isMultiple(currentSquare, X))
            adj_squares.push_back(currentSquare-1);
    }catch(const exception & e){}
    try{
        if(find(passableTiles.begin(), passableTiles.end(), graphList.at(currentSquare+X))!=passableTiles.end() /*&& (unsigned)graphList.at(currentSquare)<graphList.size()-X*/)
            adj_squares.push_back(currentSquare+X);
    }catch(const exception & e){}
    try{
        if(find(passableTiles.begin(), passableTiles.end(), graphList.at(currentSquare-X))!=passableTiles.end() /*&& graphList.at(currentSquare)>X*/)
            adj_squares.push_back(currentSquare-X);
    }catch(const exception & e){}
    return adj_squares;
}

vector<int> pathfinding(int start, int end, int graph[Y][X], bool isPassable[10])
{
    map<int, int> openList;
    vector<int> graphList;
    vector<int> closeList;
    vector<bool> passables;
    map<int, int> previous;

    for (int y = 0; y<Y; y++)
        for (int x = 0; x<X; x++)
            graphList.push_back(graph[y][x]);

    for (int y = 0; y<Y; y++)
    {
        for (int x = 0; x<X; x++)
        {
            int value = graph[y][x];
            if(isPassable[value] == true)
                passables.push_back((y*X)+x);
        }
    }

    openList.insert(make_pair(start, 10));

    do {
        int currentSquare = getMinScore(openList);
        int score = openList.find(currentSquare)->second;

        closeList.push_back(currentSquare);
        openList.erase(currentSquare);

        if(find(closeList.begin(), closeList.end(), end)!=closeList.end())
            break;

        vector<int> adjacent_squares = getAdjSquares(graphList, closeList, currentSquare, passables);

        for(int i = 0; (unsigned)i<adjacent_squares.size(); i++)
        {
            if(find(closeList.begin(), closeList.end(), adjacent_squares.at(i))!=closeList.end())
                continue;

            try{
                openList.find(adjacent_squares.at(i));
                openList.insert(make_pair(adjacent_squares.at(i), score+1));
                previous.insert(make_pair(adjacent_squares.at(i), currentSquare));
            }catch(const exception & e){
                openList.erase(adjacent_squares.at(i));
                closeList.push_back(adjacent_squares.at(i));
            }
        }
    }while(openList.size()>=0);

    int parent = previous.find(end)->second;
    vector<int> parents;
    do{
        parents.push_back(parent);
        parent = previous.find(parent)->second;
    }while(parent!=start);
    reverse(parents.begin(), parents.end());
    return parents;
}

/*int main()
{
        0: Stone
        1: Herbe
        2: Fleur
        3: Mur
        4: Arbre
        5: Eau
        6: Toit
        7: Rock
        8: Sentier
        9: Vide


    bool isPassable[10] = {true, true, true, false, false, false, false, false, true, false};
    //no = 6,9,10
    int tileMap[Y][X] = {{0,0,0,0},
                         {0,0,3,0},
                         {0,3,3,0},
                         {0,0,0,0}
                        };
    pathfinding(2, 15, tileMap, isPassable);
    return 0;
}
*/

#endif // A_STAR_H

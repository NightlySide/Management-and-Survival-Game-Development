#ifndef DJIKSTRA_H
#define DJIKSTRA_H

#include <stdio.h>
#include <limits.h>

//S pour Sommet
#define nbTile 16
#define dir 4

int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int s=0; s < nbTile; s++)
        if(sptSet[s] == false && dist[s] <= min)
            min = dist[s], min_index = s;

    return min_index;
}

int printSolution(int dist[], int n, std::vector<int> previous)
{
    printf("Sommet - Distance depuis la source\n");
    for (int i = 0; i < dir; i++)
        printf("%d \t\t %d\n", i, dist[i]);
    printf("Cases parcourues:\n");
    for (int i = 0; i < previous.size(); i++)
        printf("$d ", previous.at(i));
}

void djikstra(int graph[nbTile][dir], int src)
{
    int dist[nbTile];
    bool sptSet[nbTile];
    std::vector<int> prev;

    for (int i = 0; i < nbTile; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count; count < nbTile-1; count++)
    {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int s = 0; s < dir; s++)
            if (!sptSet[s] && graph[u][s] && dist[u] != INT_MAX
                                          && dist[u]+graph[u][s] < dist[s])
                dist[s] = dist[u]+graph[u][s];
                prev.push_back(count);
    }
    printSolution(dist, nbTile, prev);
}
/* How to use
int graph[16][4] = {{0,1,1,0}, {0,1,1,1}, {0,1,1,1}, {0,0,1,1},
                        {1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,0,1,1},
                        {1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,0,1,1},
                        {1,1,0,0}, {1,1,0,1}, {1,1,0,1}, {1,0,0,1}
                       };

    djikstra(graph, 0);
*/
#endif // DJIKSTRA_H

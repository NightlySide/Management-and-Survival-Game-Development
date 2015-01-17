#include <iostream>
#include "A_star.h"

using namespace std;

int main(int argc, char *argv[])
{
        /*0: Stone
        1: Herbe
        2: Fleur
        3: Mur
        4: Arbre
        5: Eau
        6: Toit
        7: Rock
        8: Sentier
        9: Vide*/
    bool isPassable[10] = {true, true, true, false, false, false, false, false, true, false};
    //no = 6,9,10
    /* Map = (0 = passable, X=non-passable, S=début, A=arrivée)
        S000
        00XX
        0XX0
        0000
        XX00
        000X
        0XX0
        0000
        XXX0
        0AX0
        0XX0
        0000
    */
    int tileMap[Y][X] = {{0,0,0,0},
                         {0,0,3,3},
                         {0,3,3,0},
                         {0,0,0,0},
                         {3,3,0,0},
                         {0,0,0,3},
                         {0,3,3,0},
                         {0,0,0,0},
                         {3,3,3,0},
                         {0,0,3,0},
                         {0,3,3,0},
                         {0,0,0,0},
                        };
    vector<int> path = pathfinding(3, 37, tileMap, isPassable);
    for (int i = 0; (unsigned)i<path.size(); i++)
    {
        cout << path.at(i) << " ";
    }

    return 0;
}

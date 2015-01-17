#ifndef MAP_H
#define MAP_H

#include <vector>

class Map
{
    public:
        Map();
        std::vector<int> getMap();
    protected:
    private:
        std::vector<int> m_tiles;
};

#endif // MAP_H

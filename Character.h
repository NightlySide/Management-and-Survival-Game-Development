#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"
#include <string>
#include <map>

class Character
{
    public:
        Character(std::string g_name, std::string g_race);
        int getLife();
        std::string getName();
        std::string getRace();
        std::map<std::string, int> getStats();
        Inventory getInventory();
        std::string getStatus();

    protected:
    private:
        int life;
        std::string name;
        std::string race;
        std::map<std::string, int> stats;
        Inventory inventory = Inventory();
};

#endif // CHARACTER_H

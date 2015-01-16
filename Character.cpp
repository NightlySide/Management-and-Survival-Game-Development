#include "Character.h"

Character::Character(std::string g_name, std::string g_race)
{
    name = g_name;
    race = g_race;
}

int Character::getLife()
{
    return life;
}

std::string Character::getName()
{
    return name;
}

std::string Character::getRace()
{
    return race;
}

std::map<std::string, int> Character::getStats()
{
    return stats;
}

Inventory Character::getInventory()
{
    return inventory;
}

std::string Character::getStatus()
{
    std::string status = "Name : " + getName() + " | Vie : " + " | Arme : ";
    return status;
}

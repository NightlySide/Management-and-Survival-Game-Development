#include "Animal.h"

Animal::Animal(std::string race, bool canFly, bool canSwim)
{
    m_race = race;
    m_canFly = canFly;
    m_canSwim = canSwim;
}

Animal::Animal()
{
    m_race = "Unknown";
    m_canFly = false;
    m_canSwim = false;
}

std::string Animal::getRace()
{
    return m_race;
}

bool Animal::canFly()
{
    return m_canFly;
}

bool Animal::canSwim()
{
    return m_canSwim;
}

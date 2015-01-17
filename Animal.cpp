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

std::pair<int, int> Animal::getPos()
{
    return m_pos;
}

void Animal::setPos(std::pair<int,int> pos)
{
        m_pos = pos;
}

void Animal::setPos(int pos_x, int pos_y)
{
        m_pos = std::make_pair(pos_x, pos_y);
}


#include "Character.h"

Character::Character()
{
    m_name = "John";
    m_inventory = new Inventory();
    statut.health = 100;
}

Character::~Character()
{
	//dtor
}

void Character::setHealth(int val)
{
	statut.health = val;
}

Inventory* Character::getInventory()
{
    return m_inventory;
}

std::string Character::getName() const
{
    return m_name;
}

void Character::changeName(std::string newName)
{
	m_name=newName;
}

std::pair<int, int> Character::getPos()
{
    return m_pos;
}

void Character::setPos(std::pair<int,int> pos)
{
        m_pos = pos;
}

void Character::setPos(int pos_x, int pos_y)
{
        m_pos = std::make_pair(pos_x, pos_y);
}

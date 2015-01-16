#include "Character.h"

Character::Character()
{
    m_name = "John";
    m_inventory = new Inventory();
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

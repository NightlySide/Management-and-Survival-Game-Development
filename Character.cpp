#include "Character.h"

Character::Character()
{
    m_name = "John";
}

Character::~Character()
{
	//dtor
}

void Character::setHealth(int val)
{
	statut.health = val;
}

std::string Character::getName()
{
    return m_name;
}

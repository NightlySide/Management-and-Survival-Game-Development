#include "Character.h"

Character::Character()
{

}

Character::~Character()
{
	//dtor
}

void Character::setHealth(int val)
{
	statut.health = val;
}

char Character::getName()
{
    return *m_name;
}

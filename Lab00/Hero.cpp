#include "Hero.h"
void Hero::Fight(Hero&fighter)
{
	fighter.takeDamage();
}

bool Hero::isAlive()
{
	if (mHealth > 0)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int Hero::takeDamage(int mpower)
{
	
}

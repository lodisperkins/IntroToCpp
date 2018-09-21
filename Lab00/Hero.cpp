#include "Hero.h"
void Hero::Fight(Hero&fighter)
{
	fighter.takeDamage(mPower);
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

void Hero::takeDamage(int attack)
{
	mHealth = mHealth - attack;
}


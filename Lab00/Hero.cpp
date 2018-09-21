#include "Hero.h"
void Hero::Fight(Hero&fighter)
{
	fighter.TakeDamage(mPower);
}

int Hero::report()
{
	return mHealth;
}

bool Hero::isAlive()
{
	return mHealth > 0;	
}

void Hero::TakeDamage(int attack)
{
	mHealth = mHealth - attack;
}


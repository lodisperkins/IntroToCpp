#include "Hero.h"
#include <time.h>
void Hero::Fight(Hero&fighter)
{
	changePower();
	fighter.TakeDamage(mPower);
}

int Hero::report()
{
	return mHealth;
}

void Hero::changePower()
{
	mPower = rand() % (50 - 15) + 15;
}

bool Hero::isAlive()
{
	return mHealth > 0;	
}

void Hero::TakeDamage(int attack)
{
	mHealth = (mHealth + mDefense) - attack;
}

int Hero::choice()
{
	int choice;
	choice = (6 - 0 + 1) + 0;
	return choice;
}



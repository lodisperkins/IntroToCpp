#include "Hero.h"
#include "Stack.h"
#include <time.h>
#include <string>
void Hero::Fight(Hero&fighter)
{
	changePower();
	fighter.TakeDamage(mPower);
}

Hero::Hero(std::string thing)
{
	name = thing;
	mHealth = 100;
	mPower = rand() % 50  + 15;
	mDefense = rand() % 30 +5;
}

std::string Hero::report()
{
	return name;
}

void Hero::changePower()
{
	mPower = rand() % 50 + 15;
}

bool Hero::isAlive()
{
	return mHealth > 0;	
}

void Hero::TakeDamage(int attack)
{
	mHealth = mHealth + (mDefense - attack);
}

int Hero::choice(Stack team)
{
	
	int choice;
	choice = team.report();
	return choice;
}



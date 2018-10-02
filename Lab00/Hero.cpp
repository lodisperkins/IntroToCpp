#include "Hero.h"
#include "Stack.h"
#include <time.h>
#include <string>
#include "Game.h"

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

std::string Hero::title()
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
	int damageTaken;
	damageTaken = attack-mDefense;
	if (damageTaken < 0)
	{
		
		std::cout << name << " blocked!" << std::endl;
	}
	else
	{
		mHealth = mHealth - damageTaken;
	}
	
}

int Hero::choice(Stack team)
{

	int max = team.report();
	int choice;
	choice = rand() % max + 1;
	return choice;
}



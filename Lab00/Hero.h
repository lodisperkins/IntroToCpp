#pragma once
#include <iostream>
#include <time.h>
#include <string>
class Hero
{
private:
	std::string name;
	int mHealth;
	int mPower;
public:
	void Fight(Hero&);
	Hero()
	{
	
	}
	Hero(std::string thing)
	{
		name = thing;
		mHealth = 100;
		mPower = rand() % (50 - 15 +1) + 15;
	}
	int report();
	bool isAlive();
	void TakeDamage(int attack);
	Hero operator = (Hero& other)
	{
		Hero Null;
		Null.name = other.name;
		return Null;
	}
};


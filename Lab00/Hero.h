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
	Hero(int min, int max, std::string thing)
	{
		name = thing;
		mHealth = 100;
		mPower = rand() % min + max;
	}
	int report();
	bool isAlive();
	void TakeDamage(int attack);
};


#pragma once
#include <iostream>
#include <time.h>
class Hero
{
private:
	int mHealth;
	int mPower;
public:
	void Fight(Hero&);
	Hero()
	{
	}
	Hero(int min, int max)
	{
		mHealth = 100;
		mPower = rand() % max + min;
	}
	bool isAlive();
	int takeDamage(mPower);
};


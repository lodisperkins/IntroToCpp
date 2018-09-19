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
		mHealth = 100;
		mPower = rand() % 30 + 10;
	}
};


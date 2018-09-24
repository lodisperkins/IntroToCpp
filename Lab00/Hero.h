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
	int mDefense;
public:
	void Fight(Hero&);
	Hero()
	{
	
	}
	Hero(std::string thing)
	{
		name = thing;
		mHealth = 100;
		mPower = rand() % (50 - 15) +15 ;
		mDefense = rand() % (30 - 5 + 1) + 5;
	}
	int report();
	void changePower();

	bool isAlive();

	void TakeDamage(int attack);

	Hero operator = (Hero& other)
	{
		Hero Null;
		Null.name = other.name;
		return Null;
	}

	bool operator == (const Hero& other)
	{
		return mHealth == other.mHealth && mPower == other.mPower && name == other.name;
	}

	friend std::ostream& operator<<(std::ostream& os, const Hero hero)
	{
		os << hero.name << "'s health is: " << hero.mHealth << std::endl << hero.name <<"'s power is: " << hero.mPower
			<< std ::endl << hero.name << "'s defense is: " << hero.mDefense;
		return os;
	}

	int choice();
};


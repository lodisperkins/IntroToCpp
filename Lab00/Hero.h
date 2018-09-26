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
	Hero(std::string thing);
	
	std::string report();
	void changePower();

	bool isAlive();

	void TakeDamage(int attack);
	
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


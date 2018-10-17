
#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include "Stack.h"
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
	~Hero() {}
	std::string title();
	int HP();
	void changePower();
	void changeDefense();

	bool isAlive();

	void TakeDamage(int attack);
	
	bool operator == (const Hero& other);
	

	friend std::ostream& operator<<(std::ostream& os, const Hero hero);
	
	void defend();
	

	int choice(Stack team);
};
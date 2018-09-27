#pragma once
#include "Hero.h"
#include <string>
class Stack
{
private:
	Hero mData[6];
	int mCount;
	std::string name;
public:
	Stack()
	{
		 mCount = 0;
	}
	Stack(std::string thing);
	Hero arr(int index);
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	int report();
	friend std::ostream& operator << (std::ostream& os, Stack stack);
};
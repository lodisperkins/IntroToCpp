#pragma once
#include "Hero.h"
class Stack
{
private:
	Hero mData[6];
	int mCount;
public:
	Stack()
	{
		 mCount = 0;
	}
	Hero arr(int index);
	Hero Top();
	bool Pop();
	bool Push(Hero*);
};
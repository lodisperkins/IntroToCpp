#pragma once
#include "Hero.h"
class Stack
{
private:
	Hero mData[20];
	int mCount=0;
public:
	Stack()
	{
		int mCount = 0;
	}
	Hero Top();
	bool Pop();
	bool Push(Hero*);
};
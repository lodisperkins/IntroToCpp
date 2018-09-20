#pragma once
#include "Hero.h"
class Stack
{
private:
	Hero mData[20];
	int mCount;
public:
	Hero Top();
	bool Pop();
	bool Push(Hero*);
};
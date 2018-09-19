#pragma once
#include "Hero.h"
class Stack
{
private:
	Hero data[20];
	int mCount;
	Hero null;
public:
	Hero Top();
	bool Pop();
	bool Push(Hero*);
};
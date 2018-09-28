#pragma once

#include <string>

class Hero;
class Stack
{
private:
	Hero* mData;
	int mCount;
	std::string name;
public:
	Stack();
	Stack(std::string thing);
	Hero arr(int index);
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	int report();
	friend std::ostream& operator << (std::ostream& os, Stack stack);
};
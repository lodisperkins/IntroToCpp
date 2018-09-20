#pragma once
class Stack
{
private:
	int count=0;
	int *mData;
	int capacity;

public:
	int Top();
	void Pop();
	bool Push(int item);
};
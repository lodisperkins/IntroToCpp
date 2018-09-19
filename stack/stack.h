#pragma once
class Stack
{
private:
	int count=0;
	int data[20];
	int capacity;

public:
	int Top();
	void Pop();
	bool Push(int item);
};
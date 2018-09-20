
#include "stack.h"
#include <iostream>

int Stack::Top()
{
	return mData[count];
}

void Stack::Pop()
{
	mData[count] = -1;
	count--;
}


bool Stack::Push(int item)
{
	int sum;
	if (item == '+')
	{
		mData[count] = item;
		Pop();
		int j = mData[count];
		Pop();
		int i = mData[count];
		Pop();
		count++;
		sum = i + j;
		mData[count] = sum;
		std::cout << mData[count] << std::endl;
	}
	else if (item == '-')
	{
		Pop();
		int j = mData[count];
		Pop();
		int i = mData[count];
		Pop();
		count++;
		sum = i-j;
		mData[count] = sum;
		std::cout << mData[count] << std::endl;
	}
	if (count != 20 && item == 0,1,2,3,4,5,6,7,8,9)
	{
		mData[count] = item;
		count++;
	}
	else
	{
		return false;
	}
}


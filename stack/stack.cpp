#include "stack.h"
#include <iostream>

int Stack::Top()
{
	return data[count];
}

void Stack::Pop()
{
	data[count] = -1;
	count--;
}

bool Stack::Push(int item)
{
	int sum;
	if (item == '+')
	{
		data[count] = item;
		Pop();
		int j = data[count];
		Pop();
		int i = data[count];
		Pop();
		count++;
		sum = i + j;
		data[count] = sum;
		std::cout << data[count] << std::endl;
	}
	else if (item == '-')
	{
		Pop();
		int j = data[count];
		Pop();
		int i = data[count];
		Pop();
		count++;
		sum = i-j;
		data[count] = sum;
		std::cout << data[count] << std::endl;
	}
	if (count != 20 && item == 0,1,2,3,4,5,6,7,8,9)
	{
		data[count] = item;
		count++;
	}
	else
	{
		return false;
	}
}


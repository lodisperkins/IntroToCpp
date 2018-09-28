#include "Stack.h"
#include "Hero.h"
Stack::Stack(std::string thing)
{
	mCount = 0;
	name = thing;
}
Hero Stack::arr(int index)
{
	return mData[index];
}

Hero Stack::Top()
{
	return mData[mCount  - 1];
}
bool Stack::Pop()
{
	if (mCount > 0)
	{
		Hero *temp = new Hero[6];
		for (int i = 0; i < mCount - 1; i++)
		{
			temp[i] = mData[i];
		}
		for (int i = 0; i < 6; i++)
		{
			mData[i] = temp[i];
		}
		delete[] temp;
		mCount--;
	}
	else 
	{
		return false;
	}
}
bool Stack::Push(Hero*hero)
{
	if (mCount != 6)
	{
		mData[mCount] = *hero;
		mCount++;
	}
	else
	{
		return false;
	}
}



int Stack::report()
{
	return mCount;
}

std::ostream & operator<<(std::ostream& os, Stack stack)
{
	os << stack.name <<std::endl;
	return os;
}

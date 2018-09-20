#include "Stack.h"

Hero Stack::Top()
{
	return mData[mCount];
}
bool Stack::Pop()
{
	Hero *temp = new Hero[20];
	for (int i = 0; i < mCount - 1; i++)
	{
		temp[i] = mData[i];
	}
	for (int i = 0; i < 20; i++)
	{
		mData[i] = temp[i];
	}
	delete[] temp;
	mCount--;
}
bool Stack::Push(Hero*hero)
{
	mData[mCount] = *hero;
	mCount++;
}

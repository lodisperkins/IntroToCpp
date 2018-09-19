#include "Hero.h"
#include "Stack.h"

Hero Stack::Top()
{
	return data[mCount];
}
bool Stack::Pop()
{
	data[mCount--] =
}
bool Stack::Push(Hero*hero)
{
	data[mCount++] = hero;
}

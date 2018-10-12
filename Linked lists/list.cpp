#include "list.h"
template<typename h>
iterator list<h>::begin()
{
	return iterator();
}
template<typename list>
list<list>::list()
{
}
template<typename h>
list<h>::~list()
{
}
template<typename h>
void list<h>::initialize()
{
	count = 0;
	first = nullptr;
	last = nullptr;
}
template<typename h>
const bool list<h>::isEmpty()
{
	if (count == 0)
		return false;
	else
		return true;
}

template<typename h>
const int list<h>::length()
{
	return count;
}


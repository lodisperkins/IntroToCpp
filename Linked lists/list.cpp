#include "list.h"
template<typename list>
list<list>::list()
{
}
template<typename t>
const bool list<t>::isEmpty()
{
	if (count == 0)
		return false;
	else
		return true;
}

template<typename t>
const int list<t>::length()
{
	return count;
}


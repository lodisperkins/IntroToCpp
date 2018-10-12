#include "iterator.h"
#include "list.h"
template<typename h>
iterator<h>::iterator()
{
}

template<typename h>
iterator<h>::iterator(nodetype<h> object)
{
	current = object;
}

template<typename h>
iterator<h> iterator<h>::operator++()
{
	current = current->link;
}

template<typename h>
const bool iterator<h>::operator==(const iterator<h>& iter)
{
	return *current = iter.current;
}

template<typename h>
const bool iterator<h>::operator!=(const iterator<h>& iter)
{
	return *current != iter.current;
}





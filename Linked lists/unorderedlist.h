#pragma once
#include "list.h"
template <typename h>
class unList : public list<h>
{
public:
	void insertfirst(const nodetype<h>& object)
	{
		object.link = first;
		first = object;
		count++;
	}
	void insertlast(const h& object)
	{
		object.link = last;
		last = object;
		count++;
	}
};
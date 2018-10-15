#pragma once
#include "list.h"
template <typename h>
class unorderedList : public list<h>
{
public:
	void insertfirst(const h & object)
	{
		nodetype<T> *newNode = new nodetype<T>;
		nodetype->info = object;
		newNode->link =first;
		first = newNode;
		count++;
	}
	void insertlast(const h& object)

	{
		if (count == 0)
		{
			nodetype<T> *newNode = new nodetype<T>;
			nodetype->info = object;
			last= newNode;
			newNode->link = nullptr;
			count++;
		}
		else 
		{
			nodetype<T> *newNode = new nodetype<T>;
			nodetype->info = object;
			last->link = newNode;
			last = newNode;
			newNode->link = nullptr;
			count++;
		}
	}
	virtual const bool search(const h& object)
	{

	}
};
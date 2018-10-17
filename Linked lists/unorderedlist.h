#pragma once
#include "list.h"
#include"iterator.h"
template <typename h>
class unorderedList : public list<h>
{
public:
	void insertfirst(const h & object)
	{
		if (count == 0)
		{
			nodetype<h> *newNode = new nodetype<h>;
			nodetype->info = object;
			last = newNode;
			first = newNode;
			count++;
		}
		else
		{

			nodetype<h> *newNode = new nodetype<h>;
			nodetype->info = object;
			newNode->link = first;
			first = newNode;
			count++;
		}
	}
	void insertlast(const h& object)

	{
		if (count == 0)
		{
			nodetype<h> *newNode = new nodetype<h>;
			nodetype->info = object;
			last= newNode;
			first = newNode;
			newNode->link = nullptr;
			count++;
		}
		else 
		{
			nodetype<h> *newNode = new nodetype<h>;
			nodetype->info = object;
			last->link = newNode;
			last = newNode;
			newNode->link = nullptr;
			count++;
		}
	}
	virtual const bool search(const h& object)
	{
		iterator<h> ptr;
		ptr.current = first;
		while (ptr.current->info != object)
		{
			ptr++;
			if (ptr.current->info == object)
			{
				return true;
			}
		}
		
	}
	virtual void deleteNode(const h& object)
	{

	}
};
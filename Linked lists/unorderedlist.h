#pragma once
#include "list.h"

template <typename h>
class unorderedList : public list<h>
{
public:
	void insertfirst(const h & object)
	{
		if (this->count == 0)
		{
			nodetype<h> *newNode = new nodetype<h>;
			newNode->info = object;
			this->last = newNode;
			this->first = newNode;
			this->count++;
		}
		else
		{

			nodetype<h> *newNode = new nodetype<h>;
			newNode->info = object;
			newNode->link = this->first;
			this->first = newNode;
			this->count++;
		}
	}
	void insertlast(const h& object)

	{
		if (this ->count == 0)
		{
			nodetype<h> *newNode = new nodetype<h>;
			newNode->info = object;
			this->last= newNode;
			this->first = newNode;
			newNode->link = nullptr;
			this->count++;
		}
		else 
		{
			nodetype<h> *newNode = new nodetype<h>;
			newNode->info = object;
			this->last->link = newNode;
			this->last = newNode;
			newNode->link = nullptr;
			this->count++;
		}
	}
	bool search(const h& object) const
	{
		nodetype<h> newNode = { object, nullptr };
		iterator<h> iter(newNode);
		iterator<h> iter1(first);
		while (iter != iter1)
		{
			iter1++;
			if (iter1 == iter)
			{
				return true;
			}
		}
	}
	void deleteNode(const h& object)
	{

	}
};
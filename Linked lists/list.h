#pragma once
#include "nodetype.h"
#include "iterator.h"
template <typename h>
class list
{
protected:
	int count;
	nodetype<h> * first;
	nodetype<h> *last;
public:
	const list &operator= (const list & linkedlist);
	void initialize();
	const bool isEmpty();
	const void print();
	const int length();
	void destroy(); 
	const list front();
	virtual const bool search(const h& object) = 0;
	virtual void insertfirst(const h& object) = 0;
	virtual void insertlast(const h& object) = 0;
	virtual void deleteNode(const h& object) = 0;
	iterator begin();
	iterator end();
	list();
	list(const list&);
	~list();
private:
	void copylist(const list&);

};





template<typename h>
list<h>::list()
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
	first = last;
	last = nullptr;
}
template<typename h>
const bool list<h>::isEmpty()
{
	if (count == 0)
		return true;
	else
		return false;
}

template<typename h>
const int list<h>::length()
{
	return count;
}




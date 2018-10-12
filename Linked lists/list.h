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


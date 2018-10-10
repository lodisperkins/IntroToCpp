#pragma once
#include "nodetype.h"
#include "iterator.h"
template <typename t>
class list<t>
{
protected:
	int count;
	number<t> * first;
	number *last;
public:
	const list &operator= (const list & linkedlist);
	void initialize();
	const bool isEmpty();
	const void print();
	const int length();
	void destroy();
	const list front();
	const bool search(const list& object) = 0;
	void insertfirst(const list& object) = 0;
	void insertlast(const list& object) = 0;
	void deleteNode(const list& object) = 0;
	iterator begin();
	iterator end();
	list();
	list(const list&);
	~list();
private:
	void copylist(const list&);

};


#include <iostream>
#include "iterator.h"
#include "list.h"
#include "nodetype.h"
#include"unorderedlist.h"
int main()
{
	nodetype<int> num(5);
	nodetype<int> num1(6);
	unorderedList<int> mylist;
	nodetype<int> * ptr = &num;
	iterator<int> iter(ptr);
	mylist.initialize();
	mylist.insertfirst(5);
	mylist.insertlast(2);
}
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
	unorderedList<int> mynewnewlist;
	nodetype<int> * ptr = &num;
	iterator<int> iter(ptr);
	mynewnewlist.initialize();
	mynewnewlist.insertfirst(1);
	mynewnewlist.insertfirst(2);
	mynewnewlist.insertlast(3);
	mylist.initialize();
	mylist.insertfirst(5);
	mylist.insertfirst(4);
	mylist.insertlast(3);
	mylist.insertlast(2);
	mynewnewlist = mylist;
	unorderedList<int> mynewlist(mylist);
	bool isthere = mylist.search(2);
	mylist.print();
	
	mylist.deleteNode(4);
	mylist.print();
	mynewnewlist.print();
	mylist.destroy();
}
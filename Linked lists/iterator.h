#pragma once
#include "list.h"
#include "nodetype.h"
template <typename h>
class  iterator: public list  <h>
{
private:
	nodetype<h> * current;
public:
	iterator();
	iterator(nodetype<h> object);
	h operator *();
	iterator<h> operator ++();
	const bool operator == (const iterator<h>& iter);
	const bool operator != (const iterator<h>& iter);
};


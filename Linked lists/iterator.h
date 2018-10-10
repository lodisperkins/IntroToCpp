#pragma once
#include "list.h"
#include "nodetype.h"
template <typename h>
class iterator <h>
{
private:
	number<i> * current;
public:
	iterator();
	iterator(number<i> object);
	h operator *();
	iterator<h> operator ++();
	const bool operator == (const iterator<h>&);
	const bool operator != (const iterator<h>&);

};


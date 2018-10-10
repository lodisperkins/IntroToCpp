#include "template.h"
#include <iostream>

int main()
{
	int newmin = min(3, 4);
	int newmax = max(3, 4);
	clamp (newmin, newmax, 6);
	char smaller = minalph <char>('a', 'b');
	char bigger = maxalph <char>('a', 'b');
	std::cout << smaller;
	system("pause");
}
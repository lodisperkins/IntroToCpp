#include <iostream>
//Create a function with return type of type integer. The function will take in two arguments.
//The first argument is a pointer to an array and the second is the size of the array
//The function will return the sum of the two largest values in the array
int arr(int*ptr, int size)
{
	int a;
	int b;
	for (int i = 0; i < size; ptr++)
	{
		a= *ptr;
		ptr++;
		b = *ptr;
	
		while (a > b && i!=size)
		{
			ptr++;
			b = *ptr;
		}

	}
}
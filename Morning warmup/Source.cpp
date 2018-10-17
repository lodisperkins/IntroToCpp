#include <iostream>
#include <string>
//Create a function with return type of type integer. The function will take in two arguments.
//The first argument is a pointer to an array and the second is the size of the array
//The function will return the sum of the two largest values in the array

class thing
{
public:
	thing();
	float value = 100.12;

	thing operator + (thing& num2)
	{
		thing temp;
		temp.value = value + num2.value;
		return temp;
	}
};
int SumTo(int number)
{
	int start = 1;
	int sum = 0;
	while (start <= number)
	{
		sum = start + sum;
		start++;
	}
	return sum;
}

char common(char*ptr)
{
	char*size = ptr;
	char*temp = ptr;
	char answer ='a';
	int count=0;
	while (*size <= 127 && *size > -52)
	{
		size++;
		count++;
	}
	int i =0;
	while (i < count)
	{
		if (*temp == *ptr)
		{
			answer = *temp;
			ptr++;
		}

	}
	return answer;
}



template <typename n>
n add(n x, n y)
{
	n z = x + y;
	return z;
}
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
	return 0;
}
int main()
{
	int test = 5;
	int answer = SumTo(test);

	thing value1;
	thing value2;
	float sum;
	sum = add(8, 98);
	sum = add(7.1f, 8.76f);
	thing sumthing = add(value1, value2);
	char thing[5] = { 'a','p','p','l','e' };
	char*ptr = thing;
	common(ptr);
}
thing::thing()
{
}



#include <iostream>
int sum(int num)
{
	int sum = 0;
	for (int j = 0; j <= num; j++)
	{
		sum = sum + j;
	}
	return sum;
}
int main()
{
	int num2 = 10;
	int num3 = sum(num2);
}
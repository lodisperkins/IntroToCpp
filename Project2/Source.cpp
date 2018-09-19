#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if ((n == 1) || (n == 0))
	{
		return(n);
	}
	else
	{
		return(fibonacci(n - 1) + fibonacci(n - 2));}
}
int power2(int x, int y)
{
	x = x * x;
	y--;
	if (y == 1)
	{
		return x;
	}
	else
	{
		power(x, y);
	}
}


int main()
{
	
	cout << "Input the number of terms for Fibonacci Series:";
	cin >> n;
	cout << "\nFibonacci Series is as follows\n";
int n, i = 0;
	while (i < n)
	{
		std::cout << fib(i) << std::endl;
		i++;
	}
	std::cout << power(2, 3);

system("pause");
	return 0;
	
}
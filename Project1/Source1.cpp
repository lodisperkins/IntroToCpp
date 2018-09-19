#include <iostream>
#include <string>
int main()
{
	int a, b, c, d, e;
	std::cout << "Enter 5 numbers...\n";
	std::cin >> a >> b >> c >> d >> e;
	if (a + b + c + d + e >= 0)
	{
		if (a <= c <= d <= e <= b)
		{
			std::cout << a << c << d << e << b;

		}
		else if (a <= d <= e <= b <= c)
		{
			std::cout << a << d << e << b << c;

		}
		else if (a <= e <= b <= c <= d)
		{
			std::cout << a << e << b << c << d;

		}
		else if (a <= b <= c <= d <= e)
		{
			std::cout << a << b << c << d << e;

		}
		else if (a <= b <= d <= e <= c)
		{
			std::cout << a << b << d << e << c;

		}
		else if (a <= b <= e <= c <= d)
		{
			std::cout << a << b << e << c << d;

		}
		else if (a <= b <= c <= e <= d)
		{
			std::cout << a << b << c << e << d;

		}
		else if (b <= c <= d <= e <= a)
		{
			std::cout << b << c << d << e << a;

		}
		else if (b <= d <= e <= a <= c)
		{
			std::cout << b << d << e << a << c;

		}
		else if (b <= e <= a <= c <= d)
		{
			std::cout << b << e << a << c << d;

		}
		else if (b <= a <= c <= d <= e)
		{
			std::cout << a << b << c << d << e;

		}
		else if (b <= a <= d <= e <= c)
		{
			std::cout << b << a << d << e << c;

		}
		else if (b <= a <= e <= c <= d)
		{
			std::cout << a << b << e << c << d;

		}
		else if (b <= a <= c <= e <= d)
		{
			std::cout << b << a << c << e << d;

		}
		else if (c <= a <= d <= e <= b)
		{
			std::cout << c << a << d << e << b;

		}
		else if (c <= d <= e <= b <= a)
		{
			std::cout << c << d << e << b << a;

		}
		else if (c <= e <= b <= a <= d)
		{
			std::cout << c << e << b << a << d;

		}
		else if (c <= b <= a <= d <= e)
		{
			std::cout << c << b << a << d << e;

		}
		else if (c <= b <= d <= e <= a)
		{
			std::cout << c << b << d << e << a;

		}
		else if (c <= b <= e <= a <= d)
		{
			std::cout << c << b << e << a << d;

		}
		else if (c <= b <= a <= e <= d)
		{
			std::cout << c << b << a << e << d;

		}
		else if (d <= c <= a <= e <= b)
		{
			std::cout << d << c << a << e << b;

		}
		else if (d <= a <= e <= b <= c)
		{
			std::cout << d << a << e << b << c;

		}
		else if (d <= e <= b <= c <= a)
		{
			std::cout << d << e << b << c << a;

		}
		else if (a <= b <= c <= d <= e)
		{
			std::cout << a << b << c << d << e;

		}
		else if (d <= b <= a <= e <= c)
		{
			std::cout << d << b << a << e << c;

		}
		else if (d <= b <= e <= c <= a)
		{
			std::cout << d << b << e << c << a;

		}
		else if (d <= b <= c <= e <= a)
		{
			std::cout << d << b << c << e << a;

		}
		else if (e <= c <= d <= a <= b)
		{
			std::cout << e << c << d << a << b;

		}
		else if (e <= d <= a <= b <= c)
		{
			std::cout << e << d << a << b << c;

		}
		else if (e <= a <= b <= c <= d)
		{
			std::cout << e << a << b << c << d;

		}
		else if (e <= b <= c <= d <= a)
		{
			std::cout << e << b << c << d << a;

		}
		else if (e <= b <= d <= a <= c)
		{
			std::cout << e << b << d << a << c;

		}
		else if (e <= b <= a <= c <= d)
		{
			std::cout << e << b << a << c << d;

		}
		else if (e <= b <= c <= a <= d)
		{
			std::cout << a << b << c << e << d;

		}
	}
}


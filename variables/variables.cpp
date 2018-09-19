#include <iostream>
#include <string>

int main()
{
	{
		int number;
		number = 23;
		std::cout << number << std::endl; 
	}

	{
		int numA;
		int numB;
		int sum;
		numA = 5;
		numB = 5;
		sum = numA + numB;
		std::cout << sum << std::endl; 
		float numC = 1.5;
		float numI = 2.1;
		float sumB;
		sumB = numC + numB;
		std::cout << sumB << std::endl; 
	}
	{
		int userinput;
		std::cout << "Enter a whole number" << std::endl;
		std::cin >> userinput;
		std::cout << "You entered  " << userinput << std::endl; 
	}

	//problem A
	{
		int numberA = 5;

		numberA = 9;
		numberA = 11;
		numberA = 14;
		std::cout << "A)" << numberA << std::endl;
	}

	//problem B 
	// My guess: 9,22
	{
		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
	}

	//problem c
	// My guess 21
	{
		int numberC = 3;
		numberC = 7;
		//numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl; 
	}
	//problem d
	//My guess 3
	{
		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;
	}
	//problem e
	//My guess 6
	{
		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;
	}
	//Problem f
	// My guess 6.5
	{
		float y = 13;
		y = y / 2;
		std::cout << "F)" << y << std::endl;
	}
	{   //Temperature Conversion
		std::cout << "Celsius to Fahrenheit)" << std::endl;
		float degCelsius;
		float degFahrenheit;
		std::cout << "Celsius: "; std::cin >> degCelsius;
		degFahrenheit = (degCelsius*1.8) + 32;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	}
	{   //Area Problem
		std::cout << "Area of a Rectangle)" << std::endl;
		float rectWidth; 
		float rectHeight; 
		float rectArea;
		
		
		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: "; std::cin >> rectHeight; std::cout << "W: "; std::cin >> rectWidth;
		rectArea = rectWidth * rectHeight;
		std::cout << "Area: " << rectArea << std::endl;
	}
	{
		// Average of Five)
		std::cout << "Average )" << std::endl;
		std::cout << "Enter five numbers" << std::endl;
		float a, b, c, d, e; 
		float avg; 
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		std::cin >> d;
		std::cin >> e;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		avg = (a + b + c + d + e) / 5;
		std::cout << "avg: " << avg << std::endl;
	}
	{
		// Number Swap)
		std::cout << "Number Swap)" << std::endl;
		int x;
		int y;
		std::cout << "X:"; std::cin >> x;
		std::cout << "Y:"; std::cin >> y;
		int w = x;
		x = y;
		y = w;
		// <Your work goes here>
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
	}
	{
		std::cout << "Fun Facts about Age" << std::endl;
		// Fun Facts for Your Age)
		int age;
		int ageinmonths;
		std::cout << "What's your age?"; std::cin >> age;
		ageinmonths = age * 12;
		std::cout << "Neat! You are " << age << " years old!" << std::endl;
		std::cout << "That's at least" << " " << ageinmonths << "months!" << std::endl;
		std::cout << "Based on current statistics, you'll die at around 79!" << std::endl;


	}
	{
		// Conforming to Conventions)
		int age;
		int bullet_count;
		float dog_years;
		int qty;
		float shield_value;
		float defense_matrix_cooldown;
		int red_armor_value;
		float red_armor_ratio;
		int happiness;
		int gandhi_aggression;

	}
	{
		// The Right Tool for the Job)
		int num; // integer
		short int; //modified int for specific range
		float num2; // single precision floating point
		bool num3; // stores either true or false
		char num4; // stores one character
		double num5; // double precision floating point
		signed char num6; // character modifier for range of 0-255
		unsigned char num7; // character modifier for range of -127-127
		void; //without any value
		wchar_t; // character type but has a size greater than normal

	}
	{
		// Number Swap pt2)
		int x;
		int y;
		std::cout << "Number Swap Hard Mode)" << std::endl;
		std::cout << "Enter X:"; std::cin >> x;
		std::cout << "Enter Y:"; std::cin >> y;
		x = x + y;
		y = x - y;
		x = x - y;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
	}


	system("pause");
}
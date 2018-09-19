#include <iostream>
#include "stack.h"
int operation(int item)
{
	Stack stack;
	if (item == '+')
	{
		stack.Push('+');
		
	}
	return 0;
}

int main()
{
	int input1;
	int input2;
	char op;

	while (true)
	{
		system("cls");
		std::cout << "A Simple Caluculator\n";
		std::cout << "Please input two numbers between 0 and 9 followed by either the plus and minus operator\n";
		std::cin >> input1 >> input2 >> op;
		if (input1 > 9 || input2 > 9)
		{
			system("cls");
				std::cout << "Nah fam I can't count that high. I am a SIMPLE calculator. Little numbers only please. Try again\n";
				system("pause");
				continue;
		}
		else if (op != '+' && op != '-')
		{
			system("cls");
			std::cout << "I don't know what that means my guy. I'm a SIMPLE calculator. + or - only please\n";
			system("pause");
			continue;
		}
		else
		{
			Stack daMaff;

			daMaff.Push(input1);
			daMaff.Push(input2);
			daMaff.Push(op);
			system("pause");
		}
	}
	system("pause");
	/*Stack.Push(plus);*/

}
#include <iostream>
#include <string>
int main()
{
	//LOCK YOUR COMPUTER WHEN YOU ARE AWAY
	//Steffan did this
	int problemNum;
	std::cout << "Problem 1: The Grade Book\n" << "Problem 2:FizzBuzzing\n" << "Problem 3: Calculator\n" << "Problem 4: The Health Bar\n" << "Or press 5 for homewwork\n" <<std::endl;

	std::cout << "Enter Problem Number: "; std::cin >> problemNum;
	switch (problemNum)
	{
	   case(1):

	   
	{
		int grade;
		int gradeLetter;
		std::cout << "Enter Percentage: "; std::cin >> grade;
		if (grade >= 90)
		{
			gradeLetter = 'A';
		}
		else if (grade >= 80 && grade < 90)
		{
			gradeLetter = 'B';
		}
		else if (grade >= 70 && grade < 80)
		{
			gradeLetter = 'C';
		}
		else if (grade >= 60 && grade < 70)
		{
			gradeLetter = 'D';
		}
		else
		{
			gradeLetter = 'F';
		}
		std::cout << gradeLetter << std::endl;
	}
	break;

	case(2):
	{
		int input = 0;
		std::cout << "Enter a number...\n";
		std::cin >> input;
		if (input % 5 == 0 && input % 3 == 0)
		{
			std::cout << "FizzBuzz\n";
		}
		else if (input % 5 == 0)
		{
			std::cout << "Buzz\n";
		}
		else if (input % 3 == 0)
		{
			std::cout << "Fizz\n";
		}
		else
		{
			std::cout << input << std::endl;
		}
	}
	break;
	case(3):
	{
		int lhs, rhs;
		char op;
		std::cout << "Enter two numbers...\n";
		std::cin >> lhs >> rhs;
		std::cout << "Do you wanna add(+) or subtract(-)?\n";
		std::cin >> op;
		switch (op)
		{
		case'+':
			std::cout << lhs + rhs << std::endl;
			//do stuff
			break;
		case'-':
			std::cout << lhs - rhs << std::endl;
			break;
			// do stuff

		default:
			std::cout << "Invalid math operation!!!!!!" << std::endl;
			break;

		}
	}
	break;
	case(4):
	{
		int health = 0;
		std::cout << health << std::endl;
		if (health > 0)
		{
			std::cout << "Alive" << std::endl;
			if (health < 25)
			{
				std::cout << "Health Critical" << std::endl;
			}
			std::cout << "Energy:" << health << std::endl;

		}
		else
		{
			std::cout << "Oof ya died" << std::endl;
		}
	}
	break;

	//homework
	case(5):
	{
		int homeworknum;
		std::cout << "Enter homework number..\n";
		std::cin >> homeworknum;
		switch (homeworknum)
		{
		case(1):
		{
			int x;
			int y = 0;
			if (y == 0)
			{
				x = 100;
				std::cout << x << std::endl;
			}
		
		}
		break;
		case (2):
		{
			float num1;
			float num2;
			std::cout << "Enter a number please"; std::cin >> num1;
			std::cout << "Enter another number please"; std::cin >> num2;
			if (num1 > num2)
			{
				std::cout << num1;
			}
			else if (num2 > num1)
			{
				std::cout << num2;
			}



		}
		break;
		case (3):
		{
			int a, b, c, d, e;
			std::cout << "Enter 5 numbers...\n";
			std::cin >> a >> b >> c >> d >> e;
			if (a + b + c + d + e >= 0)
			{
				if (a < c && a < d && a < e && a < b)
				{
					std::cout << a << c << d << e << b;
					
				}
				else if (a < d && a< e && a < b && a < c)
				{
					std::cout << a << d << e << b << c;
					
				}
				else if (a < e && a < b && a<= c <= d)
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
					break;
				}
				else if (d <= c <= a <= e <= b)
				{
					std::cout << d << c << a << e << b;
					break;
				}
				else if (d <= a <= e <= b <= c)
				{
					std::cout << d << a << e << b << c;
					break;
				}
				else if (d <= e <= b <= c <= a)
				{
					std::cout << d << e << b << c << a;
					break;
				}
				else if (a <= b <= c <= d <= e)
				{
					std::cout << a << b << c << d << e;
					break;
				}
				else if (d <= b <= a <= e <= c)
				{
					std::cout << d << b << a << e << c;
					break;
				}
				else if (d <= b <= e <= c <= a)
				{
					std::cout << d << b << e << c << a;
					break;
				}
				else if (d <= b <= c <= e <= a)
				{
					std::cout << d << b << c << e << a;
					break;
				}
				else if (e <= c <= d <= a <= b)
				{
					std::cout << e << c << d << a << b;
					break;
				}
				else if (e <= d <= a <= b <= c)
				{
					std::cout << e << d << a << b << c;
					break;
				}
				else if (e <= a <= b <= c <= d)
				{
					std::cout << e << a << b << c << d;
					break;
				}
				else if (e <= b <= c <= d <= a)
				{
					std::cout << e << b << c << d << a;
					break;
				}
				else if (e <= b <= d <= a <= c)
				{
					std::cout << e << b << d << a << c;
					break;
				}
				else if (e <= b <= a <= c <= d)
				{
					std::cout << e << b << a << c << d;
					break;
				}
				else if (e <= b <= c <= a <= d)
				{
					std::cout << a << b << c << e << d;
					break;
				}



			}
		}
		break;
		case (4):
		{
			int choice = 4;

			switch (choice)
			{
			case (1):
			{
				std::cout << "1";
			}
			case (2):
			{
				std::cout << "2 or 3";
			}
			case (3):
			{
				std::cout << "2 or 3";
			}
			case(4):
			{
				std::cout << "4";
			}
			default:
				std::cout << "Invalid";


			}
		}
		break;
		case (5):
		{
			int x = 0;
			int y = 1;
			(x == 0) ? y = 0 : y = 10;
		}
		break;
		case (6):
		{
			int num1;
			int num2;
			char op;
			std::cout << "Calculator\n";
			std::cin >> num1; std::cout << "  "; std::cin >> op; std::cout << "  "; std::cin >> num2;
			switch (op)
			{


			case'+':
			{

				std::cout << num1 + num2 << std::endl;

			}
			break;
			case'-':
			{

				std::cout << num1 - num2 << std::endl;

			}
			break;
			case'*':
			{
				std::cout << num1 * num2 << std::endl;
			}
			break;
			case'/':
			{
				std::cout << num1 / num2 << std::endl;
			}
			break;
			case'%':
			{
				std::cout << num1 % num2 << std::endl;
			}
			break;
			default:
			{
				std::cout << "Invalid";
			}
			break;
			}


		}
		}
		case(7):
		{
			int monthnum;
			std::cout << "Hello! Can't remember how many days in each month? Enter the number of the month to find out!\n";
			std::cin >> monthnum;
			switch (monthnum)
			{


			case(1):
			{
				std::cout << "January huh? That's 31 days. Welp goodbye\n";
			}
			break; 
			case(2):
			{
				std::cout << "February? Well it depends. Normally february has 28 days, however on a leap year it has 29.\n";
			}
			break;
			case(3):
			{
				std::cout << "March has 31 days. Fun fact: March was named after the Roman god of war Martius\n";
			}
			break;
			case(4):
			{
				std::cout << "April has 30 days\n";
			}
			break;
			case(5):
			{
				std::cout << "May has 31 days and is also the only month to begin and end on the same day each year.\n";
			}
			break;
			case(6):
			{
				std::cout << " June has 30 days....I didn't feel like googling a fact for this one.\n";
			}
			break;
			case(7):
			{
				std::cout << "July has 31 days. Nothing really significant about this month....\n";
			}
			break;
			case(8):
			{
				std::cout << " August has 31 days. There's actualy a way to figure this out without the use of a computer...\n";
			}
			break;
			case(9):
			{
				std::cout << "September has 30 days. Ummm Autumn I guess?\n";
			}
			break;
			case(10):
			{
				std::cout << "October has 31 days. More presidents were born in this month than any other. Coincidence?...Probably\n ";
			}
			break;
			case(11):
			{
				std::cout << " November has 30 days and I stayed up until 6am writing this..\n";
			}
			break;
			case(12):
			{
				std::cout << "December has 31 days. AND ITS CHRISTMAS TIME BOIII\n";
			}
			break;
			default:
				std::cout << "Really?  
" << monthnum << " ?" << "You're better than this. Try again.  ";
			}
		}
		break;
		case(8):
		{
			std::cout << "True\n";
			std::cout << " false\n";
			std::cout << "False\n";
			std::cout << "True\n";
			std::cout << "True\n";
			std::cout << "False\n";
			std::cout << "True\n";
			std::cout << "false\n";
			std::cout << "True\n";
			std::cout << "True\n";
		}
		case(9):
		{
			std::cout << "True\n";
			std::cout << "True\n";
			std::cout << "False\n";
			std::cout << "True\n";
			std::cout << "True\n";

		}
	}

}
	system("pause");
}
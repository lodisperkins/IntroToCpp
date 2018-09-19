#include <iostream>
int main()
{
	int problemnum;
	std::cout << "Enter problem number or press '4' for homework problems...\n";
	std::cin >> problemnum;
	switch (problemnum)
	{
	case(1):
	{
		int i = 1;
		while (i <= 10)
		{
			std::cout << i << ((i < 10) ? "," : " ");
			i++;
		}
	}
	break;

	case(2):
	{
		char input;
		do
		{
			std::cout << "Press q, or Q, to exit";
			std::cin >> input;
		} while (input != 'q' && input != 'Q');


	}
	break;
	case(3):
	{
		int i = 0;
		for (int i = 0; i += 2;)
		{
			if (i == 10)
				break;
		}
	}
	break;
	case(4):
	{
		int homeworknum;
		std::cout << "Enter homework number\n";
		std::cin >> homeworknum;
		switch (homeworknum)
		{




			//Homework
		case (1):
		{
			{
				int i = 100;
				for (int i = 100; i < 200; i--)
				{
					if (i < 0)
					{
						break;
					}

					std::cout << i << std::endl;
				}
			}


		}
		break;
		case(2):
		{
			{
				int i = 100;
				for (int i = 100; i--;)
				{
					if (i < 0)
					{
						break;
					}

					std::cout << i << std::endl;
				}
			}


		}
		break;
		case (3):
		{
			{
				int i = 100;
				for (int i = 100; i < 200; i--)
				{
					if (i == 0)
					{
						break;
					}

					std::cout << i << std::endl;
				}
			}


		}
		break;
		case (4):
		{
			{
				int i = 100;
				for (int i = 100; i < 200; i -= 2)
				{
					if (i < 0)
					{
						break;
					}

					std::cout << i << std::endl;
				}
			}


		}
		break;
		case (5):
		{
			{
				int i = 0;
				for (int i = 0; i < 101; i++)
				{
					if (i % 3 == 0)
					{
						std::cout << "Fizz" << std::endl;
					}
					else if (i % 5 == 0)
					{
						std::cout << "Buzz" << std::endl;
					}
					else if (i % 3 == 0 && i % 5 == 0)
					{
						std::cout << "FizzBuzz" << std::endl;
					}
					else if (i == 0)
					{
						break;
					}
					else
					{
						std::cout << i << std::endl;
					}

				}
			}


		}
		break;
		case(6):
		{
			{
				int i = 0;
				int sum = 0;

				for (int i = 0; i < 1000; i++)
				{
					if (i % 3 == 0 || i % 5 == 0)
					{
						sum = sum + i;


					}
					else if (i == 1000)
					{

						break;
					}



				}
				std::cout << sum << std::endl;
				break;
			}
		}
		break;
		case (7):
		{
			{
				int i = 101;
				while (i < 200)
				{
					i--;

					if (i < 0)
					{
						break;
					}
					std::cout << i << std::endl;
				}


				break;
			}
			break;
		}
		
		case(8):
		{
			{
				int i = 100;
				while (i < 200)
				{
					i--;

					if (i < 0)
					{
						break;
					}
					std::cout << i << std::endl;
				}


				break;
			}
		}
		break;
		case(9):
		{
			{
				int i = 101;
				while (i < 200)
				{
					i--;

					if (i < 1)
					{
						break;
					}
					std::cout << i << std::endl;
				}


				break;
			}
		}
		break;
		case (10):
		{
			{
				int i = 101;
				while (i < 200)
				{
					i -= 2;

					if (i < 0)
					{
						break;
					}
					std::cout << i << std::endl;
				}


				break;
			}
		}
		break;
		case (11):
		{
			{
				int i = 0;
				while (i < 101)
				{
					i++;
					if (i % 3 == 0)
					{
						std::cout << "Fizz" << std::endl;
					}
					else if (i % 5 == 0)
					{
						std::cout << "Buzz" << std::endl;
					}
					else if (i % 3 == 0 && i % 5 == 0)
					{
						std::cout << "FizzBuzz" << std::endl;
					}
					else if (i == 0)
					{
						break;
					}
					else
					{
						std::cout << i << std::endl;
					}

				}
			}


		}
		break;
		case (12):
		{
			{
				int i = 0;
				int sum = 0;

				while (i < 1000)
				{
					i++;
					if (i % 3 == 0 || i % 5 == 0)
					{
						sum = sum + i;


					}
					else if (i == 1000)
					{

						break;
					}



				}
				std::cout << sum << std::endl;
				break;
			}
		}
		break;



		}
	}
	}
	
	

	system("pause");
}
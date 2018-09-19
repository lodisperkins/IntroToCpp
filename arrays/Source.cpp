#include<iostream>
#include<string>
int main()
{
	int allwork = 0;
	int homework = 0;
	int classwork = 0;
	std::cout << "Enter classwork problem or 4 for homework\n";
	std::cin >> allwork;
	switch (allwork)
	{
	case(1):
	{
		char myfirstname[] = { 'L', 'o','d','i','s', };
		int i = 0;
		for (int i = 0; i < 6; i++)
		{
			std::cout << myfirstname[i] << std::endl;
		}
	}
	break;
	case(2):
	{

		//1. create myArray of size 5 with the following values
		//12 21 3 7 13
		// 2. iterate over array
		//3.compare each value to every other value to see if its greater or less than other value
		//if greater swap
		int myArray[] = { 12, 21, 3, 7, 13 };

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (myArray[i] < myArray[j])
				{
					myArray[i] = myArray[i] + myArray[j];
					myArray[j] = myArray[i] - myArray[j];
					myArray[i] = myArray[i] - myArray[j];

				}
			}
		}
	}
	break;
	case(3):
	{

		////create an array of type int with a size of 10
		//create a for loop that will assign the array 
		//	all even numbers between 0 and 20
		int newArray[10] = {};
		int x;
		for (int x = 0; x < 20; x += 2)
		{
			newArray[x++];
		}
		//second set of brackets determines what value within the parentheses to choose.
	}
	break;
	case(4):
	{
		std::cout << "Enter homework problem (switch acting weird homework problm number is actually the number of problem +4)\n";
		std::cin >> homework;
		switch (homework)
		{
		case(5):
		{std::cout << "invalid. Out of bounds\n";
		std::cout << "invalid.\n";
		std::cout << "valid\n";
		std::cout << "invalid. Commas and spaces without  numbers.\n";
		std::cout << "valid\n";
		std::cout << "invalid. no value for array blanks.\n";
		std::cout << "valid\n";
		std::cout << "invalid. no brackets\n";
		}
		case(6):
		{
			std::cout << "a.10\n";
			std::cout << "b.3\n";
			std::cout << "c.6\n";
			std::cout << "d. 14\n";
		}
		case(7):
		{
			int data[10];
			int i = 10;

			for (int j = 0; j < 10; j++)
			{
				data[j] = i;
				i--;
			}
		}
		case(8):
		{

			int i;
			int j;
			int a = 0, b = 0, c = 0, d = 0, e = 0;
			std::cin >> a;
			std::cin >> b;
			std::cin >> c;
			std::cin >> d;
			std::cin >> e;
			int data[5] = { a,b,c,d,e };
			for (int j = 4; j >= 0; j--)
			{
				std::cout << data[j];
			}

		}
		case(9):
		{
			int num6 = 0;
			int num5 = 0;
			int num4 = 0;
			int num1 = 0;
			int num2 = 0;
			int num3 = 0;
			int num = 0;
			int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
			std::cin >> a;
			std::cin >> b;
			std::cin >> c;
			std::cin >> d;
			std::cin >> e;
			std::cin >> f;
			std::cin >> g;
			std::cin >> h;
			std::cin >> i;
			std::cin >> j;
			int data[10] = { a,b,c,d,e,f,g,h,i,j };
			for (num; num < 10; num++)
			{
				num1 = data[num];
				for (num2; num2 < 10; num2++)
				{
					num3 = data[num2];
					if (num1 <= num3)
					{
						continue;
					}
					else
					{
						break;
					}
				}
				if (num2 != 10)
				{
					continue;
				}
				else
				{
					std::cout << num1 << std::endl;
					break;

				}
			}
			for (num; num < 10; num++)
			{
				num5 = data[num];
				for (num; num6 < 10; num6++)
				{
					num4 = data[num6];
					if (num5 >= num4)
					{
						continue;
					}
					else
					{
						break;
					}
				}
				if (num6 != 10)
				{
					continue;
				}
				else
				{
					std::cout << num5 << std::endl;
					break;
				}
			}


		}
		case(10):
		{
			int col = 0;
			int row = 0;
			int numba = 0;
			int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
			int themnumbas[3][3] = { { a,b,c },{ d,e,f },{ g,h,i } };
			for (col; col < 3; col++)
			{
				int row = 0;
				for (row; row < 3; row++)
				{
					numba++;
					themnumbas[col][row] = numba;
					if (row == 3)
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}
			std::cout << themnumbas[0][0] << " " << themnumbas[0][1] << " " << themnumbas[0][2] << std::endl;
			std::cout << themnumbas[1][0] << " " << themnumbas[1][1] << " " << themnumbas[1][2] << std::endl;
			std::cout << themnumbas[2][0] << " " << themnumbas[2][1] << " " << themnumbas[2
			][2] << std::endl;

		}
		case(11):
		{
			int sum = 0;
			int sum2 = 0;
			int col = 0;
			int row = 0;
			int numba = 0;
			int numba2 = 0;
			int days[29][5];
			for (col; col < 29; col++)
			{

				for (row = 0; row < 5; row++)
				{
					numba++;
					days[col][row] = numba;
					sum = numba + sum;
					if (row == 5)
					{
						break;
					}
					else
					{
						std::cout << "Row: " << sum << std::endl;
						continue;
					}
				}
			}

			for (row = 0; row < 5; row++)
			{

				for (col = 0; col < 29; col++)
				{

					numba2 = days[col][row];
					sum2 = numba2 + sum2;
					if (col == 29)
					{
						break;
					}
					else
					{
						std::cout << "Column: " << sum2 << std::endl;
						continue;
					}
				}
			}
		}
		case(12):
		{

			int Asher = 100;
			int Danzae = 100;
			int Kaiden = 100;
			int Rin = 100;
			int Akura = 100;
			int attacks = 0;
			int choice;
			int health[5] = { Asher , Danzae, Kaiden, Rin, Akura };
			for (attacks; attacks < 5; attacks++)
			{
				std::cin >> choice;
				if (health[choice] < 0)
				{
					attacks--;
					continue;
				}
				else
				{
					health[choice] = health[choice] - 40;
				}
				if (attacks == 5)
				{
					break;
				}

			}
			std::cout << health[0] << std::endl;
			std::cout << health[1] << std::endl;
			std::cout << health[2] << std::endl;
			std::cout << health[3] << std::endl;
			std::cout << health[4] << std::endl;


		}
		case(13):
		{
			std::string dragon1;
			std::string dragon2;
			std::string dragon3;
			std::string user;
			int choice;
			std::cout << "Enter user for dragon one: "; std::cin >> dragon1;
			std::cout << "Enter user for dragon two: "; std::cin >> dragon2;
			std::cout << "Enter user for dragon three: "; std::cin >> dragon3;
			std::cout << " What do you want to know?\n";
			std::cout << " Average food eaten by all(1)\n";
			std::cout << "Average food eaten by one(2)\n";
			std::cout << "Greatest amount of food eaten(3)\n";
			std::cout << "Least amount of food eaten(4)\n";
			std::cin >> choice;
			int days[3][7] = { { 23,12,34,45,56,34,77 },{ 34,76,45,89,12,34,67 },{ 15,134,64,87,56,65,87 } };
			switch (choice)
			{
			case(1):
			{
				int i = 0;
				int j = 0;
				int sum = 0;
				for (j; j < 3; j++)
				{
					for (int i; i < 7; i++)
					{
						sum = days[j][i] + sum;
					}
					if (j == 3 && i == 7)
					{
						break;
					}

				}
				int answer = sum / 21;
				std::cout << answer << std::endl;
			}
			break;
			case(2):
			{
				std::cout << "Ok whose dragon are we looking at?\n";
				std::cin >> user;
				int sum = 0;
				int i = 0;
				int answer = 0;
				if (user == dragon1)
				{
					for (int i; i < 7; i++)
					{
						sum = days[0][i] + sum;
						if (i == 7)
						{
							break;
						}
					}
					int answer = sum / 7;
					std::cout << answer << std::endl;


				}

				else if (user == dragon2)
				{
					for (int i; i < 7; i++)
					{
						sum = days[1][i] + sum;
						if (i == 7)
						{
							break;
						}
					}
					int answer = sum / 7;
					std::cout << answer << std::endl;
				}
				else if (user == dragon3)
				{
					for (int i; i < 7; i++)
					{
						sum = days[2
						][i] + sum;
						if (i == 7)
						{
							break;
						}
					}
					int answer = sum / 7;
					std::cout << answer << std::endl;
				}
			}
			break;
			case(3):
			{
				int i = 0;
				int j = 0;
				int sum = 0;
				for (int j; j < 3; j++)
				{
					int i = 0;
					for (int i; i < 7; i++)
					{
						if (sum < days[j][i])
						{
							sum = days[j][i];
						}
						if (i != 7)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					if (j == 3 && i == 7)
					{
						std::cout << sum << std::endl;
						break;
					}


				}
			}



			}
		}
		}
		system("pause");
	}

	}
}



#include <iostream>
#include <string>
int main()
{
	int homework;
	int classwork;
	int aiework;

	std::cout << "Classwork(1) or Homework(2)\n";
	std::cin >> aiework;
	switch (aiework)
	{
	case(1):
	{   int classwork;
	std::cin >> classwork;
	switch (classwork)

	{
	case(1):
	{
		char name[] = { "Lodis" };
		std::cin >> name;
		int count;
		for (count = 0; count < 5; count++)
		{
			std::cout << int(name[count]) << std::endl;
		}
	}
	break;
	case (2):
	{
		char school[] = { "AIEUS" };
		int n = 0;
		while (school[n] != '\0')
		{
			n++;
		}
		std::cout << n << std::endl;
	}
	break;
	case(3):
	{
		char one[] = { "Lodis" };
		char two[] = { "Podis" };
		bool dasame;
		int y = 0;
		int i = 0;
		while (one[i] != '\0')
		{
			i++;
		}
		while (two[y] != '\0')
		{
			y++;
		}
		if (y == i)
		{
			int iter = 0;
			while (one[iter] != '\0')
			{
				//is one at the index of the value of iter
				//the same value as two at the index of the
				//value of iter.
				//if so continue
				//else they are not the same and break
			}
		}
	}
	break;
	}
	}
	break;
	case(2):
	{
		int homework;
		std::cin >> homework;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		switch (homework)
		{
		case (1):
		{
			std::cout << "Enter first and last name\n";
			char fllName[255];
			std::cin.getline(fllName, 255);
			std::cout << fllName << std::endl;
		}
		break;
		case(2):
		{
			std::cout << "Enter first and last name\n";
			char fllName[255];//lodis
			int h = 0;
			int i = 0;
			int j = 0;
			std::cin.getline(fllName, 255);
			while (fllName[i] != '\0')
			{
				i++;
			}
			for (fllName[i]; i >= 0; i--)
			{
				std::cout << fllName[i];
			}

		}
		break;
		case(3):
		{
			std::cout << "Enter first and last name\n";
			char fllNames[5][255];//lodis
			int a = 0, b = 0, c = 0, d = 0, e = 0;
			int h = 0;
			int i = 0;
			int j = 0;
			std::cin.getline(fllNames[0], 255);
			std::cin.getline(fllNames[1], 255);
			std::cin.getline(fllNames[2], 255);
			std::cin.getline(fllNames[3], 255);
			std::cin.getline(fllNames[4], 255);

			while (fllNames[j][i] != '\0')
			{


				if (fllNames[j][i + 1] == '\0')
				{
					if (j == 0)
					{
						a = i + 1;
					}
					else if (j == 1)
					{
						b = i + 1;
					}
					else if (j == 2)
					{
						c = i + 1;
					}
					else if (j == 3)
					{
						d = i + 1;
					}
					else if (j == 4)
					{
						e = i + 1;
					}
					else
					{
						break;
					}
					j++;
					i = 0;
					continue;
				}
				if (j == 5)
				{
					break;
				}
				else
				{
					i++;
					continue;
				}
			}
			for (fllNames[0][a]; a >= 0; a--)
			{
				std::cout << fllNames[0][a];
			}
			for (fllNames[1][b]; b >= 0; b--)
			{
				std::cout << fllNames[1][b];
			}
			for (fllNames[2][c]; c >= 0; c--)
			{
				std::cout << fllNames[2][c];
			}
			for (fllNames[3][d]; d >= 0; d--)
			{
				std::cout << fllNames[3][d];
			}
			for (fllNames[4][e]; e >= 0; e--)
			{
				std::cout << fllNames[4][e];
			}
		}
		break;
		case(4):
		{
			std::cout << '\a' << std::endl;
		}
		break;
		case(5):
		{
			char usrName[255];
			char pass[255];
			int i = 0;
			int j = 0;
			bool hasnumb;
			bool hassym;
			bool hascap;
			std::cout << "Enter a username and password.\n";
			std::cout << " (password must be more than 8 characters and inlcude at least one capital letter, number, and symbol.\n";
			std::cin >> usrName;
			while (true)
			{
				std::cin >> pass;
				for (pass[i]; pass[i] != '\0'; i++)
				{
					if (pass[i] != '1', '2', '3', '4', '5', '6', '7', '8', '9')
					{
						if (pass[i + 1] != '\0')
						{
							continue;
						}
						else if (pass[i + 1] == '\0')
						{
							hasnumb = false;
							i = 0;
							break;
						}
					}
					else if (pass[i] = '1', '2', '3', '4', '5', '6', '7', '8', '9')
					{
						hasnumb = true;
						i = 0;
						break;
					}
				}
				for (pass[i]; pass[i] != '\0'; i++)
				{
					if (pass[i] != '!', '?', '#', '%', '*')
					{
						if (pass[i + 1] != '\0')
						{
							continue;
						}
						else if (pass[i + 1] == '\0')
						{
							hassym = false;
							i = 0;
							break;
						}
					}
					else if (pass[i] = '!', '?', '#', '%', '*')
					{
						hassym = true;
						i = 0;
						break;
					}
				}
				for (pass[i]; pass[i] != '\0'; i++)
				{
					if (pass[i] != 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z')
					{
						if (pass[i + 1] != '\0')
						{
							continue;
						}
						else if (pass[i + 1] == '\0')
						{
							hascap = false;
							break;
						}
					}
					else if (pass[i] = 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z')
					{
						hascap = true;
						break;
					}
				}
				if (((i >= 8) && (hasnumb == true)) && ((hassym == true) && (hascap == true)))
				{
					std::cout << "Username and password saved\n";
					break;
				}
				else
				{
					std::cout << "Password weak\n";
					std::cout << " (password must be more than 8 characters and inlcude at least one capital letter, number, and symbol.\n";
					continue;
				}
			}
		}
		break;
		case(6):
		{

		}
		}
	}
	}

	system("pause");

}
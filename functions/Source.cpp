#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//function for problem 5
void cointoss(int tosses)
{
	srand(time(NULL));
	
	int i;
	int max = 4;
	int min = 1;
	for (int i = 0; i < tosses; i++)
	{
		int j = (rand() % min) + max;
		if (j <= 2)
		{
			std::cout << "heads" << std::endl;
			min--;
			max++;

		}
		else if (j >= 3)
		{
			std::cout << "tails" << std::endl;
			min++;
			max--;
		}
	}
}
//function for problem 10
void arraymult(int array1[], int size, int array2[])
{
	for (int i = 0; i < size; i++)
	{
		array2[i] = array1[i] * i;
	}
}
//function for problem 15
int power1(int x, int y)
{
	int i = x;
	for (int j = 1; j < y; j++)
	{
		x = i * x;
	}
	return x;
}
//function for problem 16
void say(int array[], int size)
{
	
	for(int i = 0; i < size;)
	{
		int h = 1;
		for (int j = 1; j < size; j++)
		{
			
			if (array[i + h] == array[i])
			{
				h++;
				continue;
			}
			else
			{
				std::cout << j << "," << array[i] << ","
;
				i = i +j;
				j = 1;
				break;
			}
		}
		
	}
}
//functions for 17
int pinput(std::string pChoice)
{
	if (pChoice == "rock")
	{
		return 1;
	}
	else if (pChoice == "paper")
	{
		return 2;
	}
	else if (pChoice == "scissors")
	{
		return 3;
	}
}
int winner(int pchoice,int cChoice)
{
	if (pchoice == 1 && cChoice == 3)
	{
		std::cout << "you win" << std::endl;
		return true;
	}
	else if (pchoice == 2 && cChoice == 1)
	{
		std::cout << "you win" << std::endl;
		return true;
	}
	else if (pchoice == 3 && cChoice == 2)
	{
		std::cout << "you win" << std::endl;
		return true;
	}
	else if (pchoice == cChoice)
	{
		std::cout << "tie" << std::endl;
		return 2;
	}
	else
	{
		return false;
	}
}
//function for recursion 1
int fib(int x)
{
	if ((x == 1) || (x == 0))
	{
		return(x);
	}
	else
	{
		return(fib(x - 1) + fib(x - 2));
	}
}
//function for recursion 2
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
		power2(x, y);
	}
}

//classwork
int print(std::string value)
{
	std::cout << value;
	return 0;
}
bool multthree(int value)
{
	if (value % 3 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void printnums()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << i << std::endl;
	}
}
void printbetween(int low, int high)
{
	for (int numbas = low + 1; numbas < high; numbas++)
	{
		std::cout << numbas << std::endl;
	}
}
void dikinbox(int array[], int size)
{
	int j = size;
	int temp = 0;
	for (int i = 0; i <= size; i++)
	{
		while(j >= 0)
		{
			j--;
			temp = array[j];
			array[i] = temp;
			std::cout << array[i] << std::endl;
			if (i != size)
			{
				break;
			}
		}
		if (i != size)
		{
			continue;
		}
		else
		{
			break;
		}
	}
}
int sumarray(int array[], int size)
{
	
int sum = 0;
	int j;
	for (int i = 0; i < size; i++)
	{
		j = array[i];
		sum = j + sum;
	}
	return sum;
}



int main()
{
	//classwork
	//int expected = 15;
	//int numb[] = {1,2,3,4,5};
	//int actual = sumarray(numb, 5);
	//if (expected == actual)
	//{
	//	print("win");
	//}
	//dikinbox(numb, 5);
	//*print("Something");
	//multthree(9);
	//multthree(7);
	//printnums();
	//printbetween(10, 15);*/
	std::cout << "5,10,15,16,17\n";
	//homework problem 5
	int tosses;
	std::cin >> tosses;
	cointoss(tosses);
	//homework problem 10
	int inputarray[5] = { 1,2,3,4,5 };
	int outputarray[5];
	arraymult(inputarray, 5, outputarray);
	//homework problem 15
	int x = 2;
	int y = 4;
	power1(2, 4);
	//homework problem 16
	int ar[5] = { 1,2,2,3,3 };
	say(ar, 5);
	//homework problem 17
	std::cout << "Welcome to rock, paper scissors. If the computer outputs 1, it choose rock, if it outputs 2, it choose paper, amd if it's 3 it's scissors.\n";
	do
	{
	srand(time(NULL));
	int cchoice = (rand() % 1) + 3;
	std::string pChoice;
	std::cin >> pChoice;
	std::cout << cchoice << std::endl;
	int decision = winner(pinput(pChoice), cchoice);
	if (decision == 1)
	{
		break;
	}
	else if (decision == 2)
	{
		continue;
	}
	else
	{
		break;
	}
	} while (true);
	int n =10, i = 0;
	//recursion problem 1
	while (i < n)
	{
		std::cout << fib(i) << std::endl;
		i++;
	}
	//recursion problem 2
	std::cout << power2(2, 3);


	
	system("pause");
}

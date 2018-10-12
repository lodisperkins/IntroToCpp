#include <iostream>
void reverseArray(int *ptr, int size)
{
	//reverse the elements that pointer points to
	ptr;
	int *last = (ptr + (size - 1));
	int i;
	int h;
	for(int j = 1; j < size; j++)
	{	
		h =*last;
		i =*ptr; 
		*ptr = h;
		*last = i;
		last--;
		ptr++;
	}
}
void reverseCharray(char *ptr, int size)
{
	ptr;
	char *last = (ptr + (size - 1));
	int i;
	int h;
	for (int j = 1; j < size; j++)
	{
		h = *last;
		i = *ptr;
		*ptr = h;
		*last = i;
		last--;
		ptr++;
	}
}
int CountEven(int *ptr, int size)
{
	int h = 0;
	for (int j = 1; j <= size; j++)
	{
		if (*ptr % 2 == 0)
		{
			h++;
		}
		ptr++;
	}
	return h;
}
//double maxArray(double*array,int size)
//{
//
//}
bool checkArray(char*Array, char search)
{
	while (true)
	{
		if (*Array == search)
		{
			return true;
			break;
		}
		else if (*Array == '\0')
		{
			return false;
			break;
		}
		Array++;
	}
}

int main()
{
	int nums[6];
	int * ptr;
	ptr = &nums[0];
	*ptr = 1;
	ptr++;
	*ptr = 1;
	ptr++;
	*ptr = 1;
	ptr++;
	*ptr = 1;
	ptr++;
	*ptr = 1;
	ptr++;
	*ptr = 1;

	int numb[3] = { 2,4,6 };
	int *ptrnumbs = &numb[0];
	reverseArray(ptrnumbs, 3);
	char name[5] = { 'L', 'o', 'd', 'i', 's'};
	char *ptrname = &name[0];
	reverseCharray(ptrname, 5);
	int evens = CountEven(ptrnumbs, 3);
	double numbs[5] = { 13.8989, 34.3456, 54.345, 6.54, 4.766 };
	double*ptrDbl = &numbs[0];
	//double maxarray(ptrDbl, 5);
	bool hasChar = checkArray(ptrname, 'f');
	int num = 5;
	//testing for linked list
	int*lastptr = &num;
	int*midptr = lastptr;
	int *begptr = midptr;
}
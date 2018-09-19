#include <iostream>
void func(int &num1, int &num2, example &thing)
{
	num1 = 10;
	num2 = 12;
	thing = { 4,5 };
}
struct example
{
	 int numb;
	 int numb2;
};
int main()
{
	int integervariable = 10;
	std::cout << integervariable << std::endl;
	system("pause");
	int& reference = integervariable;
	std::cout << reference << std::endl;
	system("pause");
	reference = 908;
	std::cout << reference << std::endl;
	system("pause");
	int &reference2 = integervariable;
	std::cout << reference << reference2 << std::endl;
	system("pause");
	int nothing;
	float numb;
	int &nothing = nothing;
	/*int &reference = nothing;
	int reference2 = numb;*/

	int five = 5;
	int six = 6;
	const example thing = { 1,2 };
	std::cout << thing.numb << thing.numb2 << std::endl;
	std::cout << five << six << std::endl;
	func(five, six, thing);
	std::cout << five << six << std::endl;
	std::cout << thing.numb << thing.numb2 << std::endl;
	//It is more efficient to pass a reference to a struct into a function so we can easily modify the data inside the function instead of just making a copy of it and returning the result of the function
	//Passing in a reference to an int rather than the int itself varies in efficency based on the use case. Passing an int into a function for arithmetic in some cases wouldn't require a change to the arguments however other cases might.
	//The only advantage to using const is preventing the data from accidentally being changed later.
}
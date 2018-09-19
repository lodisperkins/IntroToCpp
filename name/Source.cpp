#include <iostream>
#include <string>
int main()
{
	std::string myname = "Lodis Perkins";
	std::string id = "s188043";
	std::cout << "Name:" << myname << std::endl;
	std::cout << "ID:" <<id << std::endl;
	std::string FirstName;
	std::cout << "Enter First Name" << std::endl;
	std::cin >> FirstName;
	std::string LastName;
	std::cout << "Enter Last Name"<< std::endl;
	std::cin >> LastName;
	std::cout << "Hello," << FirstName << " " << LastName << std::endl;



	system("pause");
}


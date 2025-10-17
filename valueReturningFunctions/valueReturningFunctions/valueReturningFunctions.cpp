
#include <iostream>

int getIntFromUser() 
{
	std::cout << "Enter an integer: ";
	int a{0};
	std::cin >> a;

	return a;

}

int main()
{
	int a{ getIntFromUser() };
    std::cout << "You entered " << a << "\n";

	return 0;
}


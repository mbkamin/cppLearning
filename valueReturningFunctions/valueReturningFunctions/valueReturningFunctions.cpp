
#include <iostream>

int getIntFromUser() 
{
	std::cout << "Enter an integer: ";
	int a{0};
	std::cin >> a;

	return a;

}
void print()
{
	std::cout << "This is a void function that does not return a value.\n";
}

int doubleInt(int a)
{
	return 2 * a;
}

int tripleInt(int a)
{
	return 3 * a;
}

int main()
{
	int a{ getIntFromUser() };
    std::cout << "You entered " << a << "\n";

	//using functions that take and return values
	std::cout << "Double of " << a << " is " << doubleInt(a) << "\n";
	std::cout << "Triple of " << a << " is " << tripleInt(a) << "\n";

	std::cout << "Calling the void function:\n";
	print();

	return 0;
}


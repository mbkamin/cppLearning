// Basic Math Operations in C++

#include <iostream>

int main()
{
    std::cout << "Hello, please enter two integers. \n";

    int a{0};
    int b{0};

	std::cin >> a >> b;

	std::cout << "You entered " << a << " and " << b << ".\n";
	std::cout << "Here are some basic math operations on these numbers: \n";
	std::cout << "If we want to add these numbers, we get: " << a + b << "\n";
	std::cout << "If we want to subtract these numbers, we get: " << a - b << "\n";
	std::cout << "If we want to multiply these numbers, we get: " << a * b << "\n";
	std::cout << "If we want to divide these numbers, we get: " << a / b << "\n";

	return 0;

}


#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int x{ };
    std::cin >> x;

    std::cout << "Double that number is: " << x * 2 << std::endl;
}
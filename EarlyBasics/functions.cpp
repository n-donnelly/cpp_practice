#include <iostream>

// Function that gets an integer from the user
// Must define function before calling it in main()
int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// Function that prints the sum of two integers
void printSum(int x, int y) {
    std::cout << x << " + " << y << " = " << x + y << '\n';
}

//Forward declaration of multiplyNumbers() so we can call it in main()
int multiplyNumbers(int x, int y); //Don't need to name the parameters but best practice to do so

int main()
{
    int x { getValueFromUser() };
    int y { getValueFromUser() };

    printSum(x, y);

    std::cout << x << " * " << y << " = " << multiplyNumbers(x, y) << '\n';

    return 0;
}

int multiplyNumbers(int x, int y) {
    return x * y;
}

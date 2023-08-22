#include <iostream>

// Function that returns 5
int five()
{
    return 5;
}

int main()
{
    int a;         // no initializer (default initialization)
    int b = 5;     // initializer after equals sign (copy initialization)
    int c( 6 );    // initializer in parenthesis (direct initialization) -- Not preferred as could be mistaken for forward declaration of a function

    // List initialization methods (C++11) (preferred)
    int d { 7 };   // initializer in braces (direct list initialization)
    int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    int f {};      // initializer is empty braces (value initialization)

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;

    [[maybe_unused]] int x { 5 };   // since x is [[maybe_unused]], no warning generated

    std::cout << "Hello, world!" << std::endl;
    //cout is buffered output, so it will not print until the buffer is flushed
    //endl flushes the buffer
    ///n is a new line character but doesn't flush the buffer so could be more efficient

    /*
    std::cout << "Enter a number: "; // ask user for a number
    std::cin >> f; // input from user
    std::cout << "User input = " << f << std::endl;

    std::cout << "Enter two numbers separated by a space: ";

    int z{ }; // define variable x to hold user input (and zero-initialize it)
    int y{ }; // define variable y to hold user input (and zero-initialize it)
    std::cin >> z >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << z << " and " << y << '\n';
    */
    int uninit; // Uninitialized variable
    std::cout << uninit << '\n'; // This will print garbage

    std::cout << sizeof(int) << '\n'; // prints the size of an integer (typically 4 bytes

    //When splitting lines with operators, put operator at start of new line
    std::cout << 3 + 4
        + 5 + 6
        * 7 * 8 
        << '\n' 
        << std::endl;

    int a_{ 2 };             // initialize variable a with literal value 2
    int b_{ 2 + 3 };         // initialize variable b with computed value 5
    int c_{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d_{ b };             // initialize variable d with variable value 5
    int e_{ five() };        // initialize variable e with function return value 5

    std::cout << a_ << '\n';
    std::cout << b_ << '\n';
    std::cout << c_ << '\n';
    std::cout << d_ << '\n';
    std::cout << e_ << '\n';


    return 0;
}
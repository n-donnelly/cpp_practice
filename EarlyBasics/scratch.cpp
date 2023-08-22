//'#' is a preprocessor directive - these tell preprocesser to do something
//Preprocessor directives are executed before the code is compiled
//Include directive tells preprocessor to include the contents of the file iostream
#include <iostream>

#define MY_NAME "Neil" //Preprocessor directive to define a macro. This macro is replaced with the string "Neil" before the code is compiled

//Considered a bad practice as can cause name collisions
using namespace std; //Explicitly using the std namespace

#define sum(a, b) (a + b) //Macro to define a function. This macro is replaced with the expression (a + b) before the code is compiled

int main()
{
    cout << "Hello, world!" << endl; //Since we are using the std namespace, we don't need to use std::cout
    cout << "My name is " << MY_NAME << endl; //Since MY_NAME is a macro, it is replaced with the string "Neil" before the code is compiled

#define check
#ifdef check
    cout << "check is defined" << endl;
#endif

    cout << sum(1, 2) << endl; //Since sum is a macro, it is replaced with the expression (1 + 2) before the code is compiled

    return 0;
}
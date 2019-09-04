/*
 *  Program: Hello world
 *  Author: Bryan Beus
 *  Date: 2019-08-30
 *  Description: This program demonstrates basic C++ principles
 *
 */
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    std::cout << "Hello, world\n";
    std::cout << "New line" << std::endl;

    /* One error I did was to leave off a ":" colon from the "std::endl" phrase. This resulted in an error stating that there is an unterminated comment. */

    int a = 10;
    int b = 500;
    int c = a * b;

    std::cout << "Multiplying " << a << " by " << b << " returns: " << c << std::endl; 

    cout << "Press ENTER to quit: ";
    while (cin.get() != '\n');

    return 0;
}

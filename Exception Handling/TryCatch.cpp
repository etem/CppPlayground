#include <iostream>


int main()
{
    try {
    int a;
    int b;

    std::cout << "Plese enter two numbers for division. They can be any number except zero." << std::endl;

    std::cout << "Enter first number : " << std::endl;
    std::cin >> a;

    std::cout << "Enter second number : " << std::endl;
    std::cin >> b;


    if(a == 0 || b == 0)
    {
        throw 0;
    }
    std::cout << "The result is : " << a / b << std::endl;
    }
    catch(...) // This can be (int x) or whatever. In this case we are catching all error types not just int. Catch() block must contain three zeroes
    {
        std::cout << "Division by zero not possible! Exiting program." << std::endl;

    }


}

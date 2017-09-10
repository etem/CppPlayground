#include <iostream>

template <class T, class U> // Using multiple generic types.

T smaller(T a, U b)
{
    return (a < b ? a : b);

/*
The ternary operator checks the a<b condition and returns the corresponding result.
The expression (a < b ? a : b) is equivalent to the expression if a is smaller than b, return a, else, return b.
*/
}



int main()
{
    int x = 50;
    double z = 75.5;

    std::cout << smaller(x,z) << std::endl;
}

/*
Remember that when you declare a template parameter, you absolutely must use it in your function definition.
Otherwise, the compiler will complain!
*/


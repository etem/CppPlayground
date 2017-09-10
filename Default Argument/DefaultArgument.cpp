#include <iostream>


int sum(int a, int b=50) // Default argument. 50 will be used by default if not parameters for b are given.
{
    return a + b;
}


int main()

{
    std::cout << sum(15) << std::endl; // Outputs 65.
}

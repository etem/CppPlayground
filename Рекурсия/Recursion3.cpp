#include <iostream>


    int recursiveFunc(int a)
    {
        if(a == 15)
        {
                std::cout << "A is 15. Stopping execution of the program." << std::endl;
        }
        else
    {
        std::cout << "A is " << a << std::endl;
        std::cout << "Lowering the value of a with - 1" << std::endl;
        return recursiveFunc(a-1); // Call yourself with lower parameter.
    }
    }

int main()
{

    recursiveFunc(20);

}

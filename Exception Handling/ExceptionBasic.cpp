#include <iostream>


int main()
{
    try
    {
        int sonAge = 50;
        int motherAge = 30;
        if(sonAge > motherAge)
        {
            throw 99;
        }
    }
    catch(int x) // x will be catched from try statement.
    {
        std::cout << "Something is wrong - Error executed : " << x << std::endl; // show error code of type int
    }
}

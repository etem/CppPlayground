#include <iostream>

int recurser(int x);


int recurser(int x)
{
    std::cout << "Current value of x is : " << x << std::endl;
    if(x > 0)
        return recurser(x-1); // If X more than 0, call the yourself again with x-1 argument

}


int main()
{
    std::cout << recurser();
}

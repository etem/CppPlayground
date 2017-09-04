#include <iostream>
#include <cstdlib>

int main()
{
    int anArray[20];

    for(int i = 0; i < sizeof(anArray)/sizeof(anArray[0]); i++) 
    {
        anArray[i] = rand() % 100000;
        std::cout << "Filling the array element - " << i << " with random number : " << anArray[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Array status after the filling : " << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof(anArray)/sizeof(anArray[0]); i++)
    {

        std::cout << "Element - " << i << " has value of - " << anArray[i] << std::endl;
    }



}

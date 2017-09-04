#include <iostream>

int main()
{
    int counter = 1;
    int number;
    while(counter < 5)
    {
        std::cout << "Please enter a number " << std::endl; // Will prompt the user till the counter reaches 5
        std::cin >> number;
        counter ++;
    }
}

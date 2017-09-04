#include <iostream>

int main()
{
    int counter = 1;
    while(counter <= 100)
    {
        std::cout << "The counter now is " << counter << std::endl; // Print the value of the counter on each iteration
        counter += 2; // Increment the counter
    }
}

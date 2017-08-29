#include <iostream>

int multiplier(int num);

int multiplier(int num)
{
    int total = 0;
    
    total = num * num;
    return total;
}

int main()
{
    int num = 5;
    int sum = 0;
    
    sum = multiplier(num); // Assign the value returned from multiplier() to sum variable
    
    std::cout << "Num is " << num << std::endl;
    std::cout << "Sum is " << sum << std::endl;
}
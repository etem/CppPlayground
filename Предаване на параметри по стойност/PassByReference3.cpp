#include <iostream>

void reversefunc(int &number1, int &number2);

void reversefunc(int &number1, int &number2) // Passing the memory address of the variable instead of the value
{
    int temp = 0; 
    temp = number1;
    number1 = number2; 
    number2 = temp;
    //The function doesn't return any value. Instead of this it modifies passed parameters. 
    
    
}

int main()
{
    int number1 = 5, number2 = 10;
    
    std::cout << "The current values are " << std::endl;
    
    std::cout << number1 << "  for number1" << std::endl;
    
    std::cout << number2 << "  for number2" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Reversing the numbers.... " << std::endl;
    
    std::cout << std::endl;
    reversefunc(number1,number2);
    
    std::cout << "The value of number1 is " << number1 << std::endl;
    
    std::cout << "The value of number2 is " << number2 << std::endl;
    
    std::cout << std::endl;
    
}


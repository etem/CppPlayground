#include <iostream>

int main()

{
    int variable = 50;
    int *pointer;

    std::cout << "The value of the pointer before assignment is " << pointer << std::endl;
    std::cout << "It's physical address before the assignment is " << &pointer << std::endl;

    pointer = &variable;

    std::cout << "The value of the pointer after the assignment is " << *pointer << std::endl;
    std::cout << "And it's physical address of the variable the pointer points to - " << pointer << std::endl;
    std::cout << "The physical address of the pointer after the assignment is " << &pointer << std::endl;


//Example 2: 

    int number1 = 200;
    int number2 = 300;

    int *p = &number1;
    *p = *p + number2; // This is the same as number1 + number2

    std::cout << *p << std::endl;

/*
The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer (The asterisk is part of its type compound specifier).
Don't confuse this with the dereference operator, which is used to obtain the value located at the specified address.
They are simply two different things represented with the same sign.
*/


}

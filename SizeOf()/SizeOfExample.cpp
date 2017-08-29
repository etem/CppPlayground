#include <iostream>
#include <string>
/*
Sizeof() function examples.
Sizeof can be executed for any variable or data type to get it's size.

*/


int main()

{
    int aninteger;
    double adouble;
    int examplearray[5];
    std::string anemptystring;
    
    int assignedinteger = 55;
    int escapekey = 0;
    
    do
    
    {
    std::cout << "Default integer size for this system is " << sizeof(aninteger) << std::endl;
    
    std::cout << "Default double size : " << sizeof(adouble) << std::endl;
    
    std::cout << "An array with 5 integers : " << sizeof(examplearray) << std::endl;
    
    std::cout << "Default string size : " << sizeof(anemptystring) << std::endl;
    
    std::cout << "Please enter 3 to exit the program, or any other key to continue" << std::endl;
    
    std::cin >> escapekey;
    }
    while(escapekey != 3);
    
}
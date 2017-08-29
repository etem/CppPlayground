#include <iostream>

int main()
{
    std::string *ptr = new std::string; // Allocate memory for new string type

    std::cout << "Please enter a string :" << std::endl;

    std::cin >> *ptr;

    std::cout << "The pointer stores this string : " << *ptr << std::endl;
    std::cout << "It takes " << sizeof(*ptr) << " bytes." << std::endl;
    std::cout << "Memory address of the pointer is : " << ptr << std::endl;

    delete ptr; // delete pointer
}

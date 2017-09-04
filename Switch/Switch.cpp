#include <iostream>

int main()
{
    int age;
    std::cout << "Please enter your age : " << std::endl;
    std::cin >> age; std::cin.ignore();

    switch(age)
    {
    case 15:
        std::cout << "Too young" << std::endl;
    case 30:
        std::cout << "Adult" << std::endl;
    case 70:
        std::cout << "Senior" << std::endl;
    default:
        std::cout << "Default statement executed!" << std::endl;
    }
}

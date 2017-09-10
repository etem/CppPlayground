#include <iostream>


class Car
{
private:
    std::string make;
    std::string model;
    int year;
    int speed;

public:

    Car(std::string mak, std::string mod, int yr, int sp) : make(mak), model(mod), year(yr), speed(sp) {}

    void printMake()
    {
        std::cout << "Printing using standard call - " << make << std::endl;
        std::cout << "Printing using the pointer - " << this->make << std::endl;
        std::cout << "Printing using the pointer in parentheses - " << (*this).make << std::endl;

    /*
    Every object in C++ has access to its own address through an important pointer called the this pointer.
    Inside a member function this may be used to refer to the invoking object.
    */
    
    }




};

int main()
{
    Car Ford("Ford", "Fiesta", 2015, 220);
    Ford.printMake();
}

#include <iostream>

class Animal
{
public:
    Animal();
    std::string name = "Animal name ";
    void sayhi() { std::cout << "Hellloo!" << std::endl;}
};


Animal::Animal() // Declare constructor
{
    std::cout << "New animal created." << std::endl;
}


class Dog : public Animal  // New class Dog(derived) will inherit all public functions and variables, including the constructor of Base class(Animal)
{

};




int main()
{
    Dog doggy; // Create new object from Dog class.
    std::cout << doggy.name << std::endl;
    doggy.sayhi();
}



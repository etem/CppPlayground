#include <iostream>

class Mother // Base class
{
public:
    std::string hair_color = "blonde";
    void sayHello() { std::cout << "Helloooo!" << std::endl; }

private:
    std::string name = "Angela";
    int age = 36;

};


class Daughter : public Mother // Derived class. All public members of Mother will become public members of Daughter;
{

};


int main()
{
    Daughter Marry;
    Marry.sayHello();

    //std::cout << Marry.age << std::endl; // Wont work since age is private member of Mother.
}

/*
A derived class inherits all base class methods with the following exceptions:
- Constructors, destructors
- Overloaded operators
- The friend functions
*/




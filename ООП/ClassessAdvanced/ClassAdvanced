#include <iostream>
#include <string>

void getname();
void setname();
void getmodel();
void setmodel();


class Car //Define a new Class(template) for Car
{
private: //Class variables are private and can be changed only from Class members(functions)
    std::string name = "Porsche";
    int model = 2006;
    std::string speed = "200 km/h";

public: //Define public accessible class functions.
    Car(); // A constructor. Sets default value to name variable. Name of the constructor must be the same as the class.

    void getname() { std::cout << "The name of the car is : " << name << std::endl; } // Defined in one line
    void setname(std::string x)
    {
        name = x;
    }
    void setname_advanced()
    {
        std::string nam;
        std::cout << "Please enter a name for the car : " << std::endl;
        std::getline (std::cin, nam);
        name = nam; // Change the name of the car.
    }

    void setmodel(int mdl) { mdl = model;}
    void getmodel() { std::cout << "Model of the car  " << name << " is : " << model << std::endl; } // name variable can be accessed directly. No need for calling Car.name

};


Car::Car()
{
    name = "Jet";
}


int main()
{
    Car BMW, Opel, Ford;
    Ford.getname(); // Will display "Jet", this is overloaded by the constructor of the class.
    Ford.setname("Ford");
    Ford.setmodel(2001);
    Ford.getname(); // Will display "Ford".
    Ford.getmodel();
    BMW.setname_advanced();
    BMW.getname();
}


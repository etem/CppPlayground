#include <iostream>
#include <string>

struct Cars
{
    std::string model;
    int horsepower;
    int price;
};


Cars BMW; // Create a new structure and inherit its parameters. 
Cars Ford;
Cars Opel;

int main()
{
    BMW.model = "520";  // Assign a value to structure parameters.
    BMW.horsepower = 200;
    BMW.price = 50000;
    
    
    
    std::cout << "BMW model " << BMW.model << " has " << BMW.horsepower << " horsepower and costs " << BMW.price << " dollars" << std::endl;
    
    
}
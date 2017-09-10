#include <iostream>

class Fruit
{
private:
    double weight;
    std::string color;
    std::string taste;

public:
    Fruit() {}
    Fruit(double w) : weight(w) {}

    Fruit operator + (Fruit &obj)
    {
        /*
        We need our + operator to return a new MyClass object with a member variable equal to the sum of the two objects' member variables.
        */
        Fruit weight_result; // Creating weight of type object. Define a default constructor otherwise compiler will throw an error here.
        weight_result = this->weight + obj.weight;
        return weight_result;
    }

    double get_weight() { return weight;}
};




int main()
{


    Fruit b(1.50);
    Fruit a(2.3);

    Fruit C = a + b; // Object C will contain the sum of weight variables of a and b.
    std::cout << C.get_weight() << std::endl; // Outputs 3.8
}





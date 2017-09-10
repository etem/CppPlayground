#include <iostream>

class Computer
{
private:
    double cpuspeed;
    int memory;


public:
    Computer() {}
    Computer( double cp, int mem) : cpuspeed(cp), memory(mem) { std::cout << "Computer object created!" << std::endl;}

    void printSpecs()
    {
        std::cout << "My CPU speed is  " << cpuspeed << " Ghz." << std::endl;
        std::cout << "Memory capacity : " << memory << " GB."<< std::endl;
    }
    ~Computer() { std::cout << "Computer object destroyed!" << std::endl;}
};


class Laptop : public Computer
{
private:
    double weight;

public:
    Laptop() {}
    Laptop(int cpp, int meem, double wg) : Computer( cpp, meem)  // Calling the constructor of base class as argument. Use same variable names for Base and Devived class constructors in the parenthesses!
    {
        weight = wg;
        std::cout << "Laptop object created!" << std::endl;
    }
    void printWeight()
    {
        std::cout << "The weight of the device is : " << weight << std::endl;
    }
    ~Laptop() { std::cout << "Laptop object destroyed! " << std::endl;}
};


int main()
{
    int test = 5;
    double tt = 5.5;
    Laptop Acer(3, 8, 4.5);
    Acer.printSpecs();
    Acer.printWeight();

    std::cout <<  "Size of Laptop object is " << sizeof(Acer) << std::endl;


}

/*
The output is :

Computer object created!
Laptop object created!
My CPU speed is  3 Ghz.
Memory capacity : 8 GB.
The weight of the device is : 4.5
Size of Laptop object is 24
Laptop object destroyed!
Computer object destroyed!




As seen the program will create 2 objects.

*/

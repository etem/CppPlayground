#include <iostream>

class Car
{
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(std::string mak, std::string mod, int yr) : make(mak), model(mod), year(yr) {}

};

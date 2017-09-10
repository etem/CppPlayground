#include <iostream>

class Birthday
{
private:
    int month;
    int day;
    int year;

public:
    Birthday(int d, int m, int y) : day(d), month(m), year(y) {}

    void printDate()
    {
        std::cout << "Date of birth " << day << "/" << month << "/" << year << std::endl;
    }

};

class Person
{
private:
    std::string name;
    Birthday bd; // Using parent class inside our derived class.

public:
    Person(std::string n, Birthday b) : name(n), bd(b) {}

    void printInfo()
    {
        std::cout << "Name : " << name << std::endl;
        bd.printDate(); // Calling parent class function from the derived class.

    }

};


int main()

{
    Birthday BD(5,5,1988);
    Person P("Emo", BD);
    P.printInfo();

/*
Outputs

Name : Emo
Date of birth 5/5/1988

*/


}

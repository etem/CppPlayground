#include <iostream>

class Enemy
{
public:
    virtual void attack() {} // Virtual function is function that MUST be overloaded.
    //A class that declares or inherits a virtual function is called a polymorphic class.

};


class Ninja : public Enemy
{
public:
    void attack()
    {
        std::cout << "Ninja!" << std::endl;
    }
};


class Monster : public Enemy
{
public:
    void attack()
    {
        std::cout << "Monster!" << std::endl;
    }
};


int main()
{

    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;



    e1->attack(); // Function will be called according to the actual type of the object refferring, regardless declared pointer type.
    e2->attack();

}

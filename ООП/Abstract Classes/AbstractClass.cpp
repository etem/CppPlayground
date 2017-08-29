#include <iostream>

class Enemy
{
public:
    virtual void attack()
    {
        std::cout << "Enemy!" << std::endl; //Implemented in base class.
    }
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
    Enemy e;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;



    e1->attack(); // Function will be called according to the actual type of the object refferring, regardless declared pointer type.
    e2->attack();
    e3->attack();

/*
This is how polymorphism is generally used.
You have different classes with a function of the same name, and even the same parameters, but with different implementations.
*/

}

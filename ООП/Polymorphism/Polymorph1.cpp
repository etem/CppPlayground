#include <iostream>

class Enemy
{
protected:
    int attackPower;

public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};


class Ninja : public Enemy
{
public:
    void attack()
    {
        std::cout << "Ninja! - " << attackPower << std::endl;
    }
};


class Monster : public Enemy
{
public:
    void attack()
    {
        std::cout << "Monster! - " << attackPower <<std::endl;
    }
};


int main()
{
    Ninja n;
    Monster m;

    Enemy *e1 = &n; // Create pointer  of type Enemy to n and m objects;
    Enemy *e2 = &m;


    e1->setAttackPower(50); //It is faster to set values via pointers instead of calling functions directly on the objects.
    e2->setAttackPower(100); //We were able to set protected data via pointers. 

    //e1.attack - Wont work because e1 is pointer type;
    //e2.attack

    n.attack();
    m.attack();
}

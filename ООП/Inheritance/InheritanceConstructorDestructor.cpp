#include <iostream>

class Mother
{
public:
    Mother() { std::cout << "Mother class created" << std::endl;}
    ~Mother() { std::cout << "Mother class destroyed" << std::endl;}
};


class Daughter : public Mother // Daughter WILL NOT inherit Constructor/Destructor of base class.
{
public:
    Daughter() { std::cout << "Daughter object created" << std::endl;}
    ~Daughter() { std::cout << "Daughter object destroyed" << std::endl;}
};


int main()
{
    Daughter Jessica;

/* All 4 messages will appear on the screen.
This is because Mother class needs to be created first.
*/

}

#include <iostream>
using namespace std;

class Enemy
{
public:
    virtual void attack() = 0; // 0 means that function has no body;
    // This is pure virtual function. It is to be redefined on derived classes.
    //It must be overrided on derived class, otherwise compilation will fail.
};


class Ninja: public Enemy {
 public:
  void attack() {
   cout << "Ninja!"<<endl;
  }
};


class Monster: public Enemy {
 public:
  void attack() {
   cout << "Monster!"<<endl;
  }
};

class Creature : public Enemy
{
public:
    void sayHi()
    {
        cout << " Hellooo. I am a creature!" << endl;
    }
};


int main()
{
    Ninja n;
    Monster m;
    //Creature c; Object creation will not work because virtual function of base class is not overrided.

    n.attack();
    m.attack();
}

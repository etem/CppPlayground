#include <iostream>

class NetworkingDevices
{
protected:
    double cpu_speed;

public:
    void set_cpu_speed(double sp) { cpu_speed = sp; }
    double get_cpu_speed() { return cpu_speed; }

    virtual void purpose() { std::cout << "I'm a networking device" << std::endl; }

};

class Router : public NetworkingDevices
{
public:

    void purpose() { std::cout << "I'm connecting the world!" << std::endl; }

};

class Firewall : public NetworkingDevices
{
public:

    void purpose() { std::cout << "I'm protecting your networks!" << std::endl; }
};


int main()

{
    Router RTR;
    Firewall FW;

    NetworkingDevices *rr = &RTR;
    NetworkingDevices *fw = &FW;

    //Router *rt = new Router;
    //Firewall *fww = new Firewall;

    rr->purpose();
    fw->purpose();


/*
Defining a virtual function in the base class, with a corresponding version in a derived class,
 allows polymorphism to use NetworkingDevice pointers to call the derived classes' functions.

Better explanation here :

https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c

*/

}






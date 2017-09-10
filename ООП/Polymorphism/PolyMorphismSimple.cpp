#include <iostream>

class NetworkingDevices
{
protected:
    double cpu_speed;

public:
    void set_cpu_speed(double sp) { cpu_speed = sp; }
    double get_cpu_speed() { return cpu_speed; }

    void purpose() { std::cout << "I'm a networking device" << std::endl; }

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
    RTR.purpose();

    Firewall FW;
    FW.purpose(); // Will call its purpose function() instead of the one of Base class.

}






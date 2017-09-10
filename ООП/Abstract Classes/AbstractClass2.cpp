#include <iostream>

class NetworkingDevice
{
public:
    virtual void specs() = 0; // Pure virtual function that needs to be overrided in the derived classes.
};


class Router
{
public:
    void specs() { std::cout << "Device specs .... " << std::endl; }
};


int main()
{
    //NetworkingDevice NW; Compilation will fail because NetworkinDevice is an abstract class(with a pure virtual function)
    //This means we can't create objects from abstract classes. They are only used for inheritance.

    Router *rtr = new Router;
    rtr->specs();
}

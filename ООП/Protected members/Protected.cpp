#include <iostream>

class NetworkDevice
{
private:
    std::string brand;
    std::string model;
    int price;
    int testAccess;

protected:
    std::string cpu_architecture = "ARM";

public:
    NetworkDevice( std::string br, std::string mod, int pr) : brand(br), model(mod), price(pr) {}
};


class SOHORouter : public NetworkDevice
{
    public:
    SOHORouter(std::string b, std::string md, int p) : NetworkDevice(b, md, p) {}

    std::string get_cpu_arch() { return cpu_architecture; }

    void change_cpu_arch(std::string arch)
    {
        cpu_architecture = arch;
    }


};



int main()
{
    SOHORouter rtr("kk", "megarouter", 50);
    //std::cout << rtr.cpu_architecture << std::endl; // Protected member of the base class is accessible from the derived class only through a getter function. It can't be called directly.

    std::cout << rtr.get_cpu_arch() << std::endl;
    rtr.change_cpu_arch("X86"); // Change the value of protected variable.
    std::cout << rtr.get_cpu_arch() << std::endl;
}

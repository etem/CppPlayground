#include <iostream>

class bankAccount
{
private: // Private properties can't be accessed outside of the class.
    std::string currency = "BGN";
    double amount = 10000;
public:

    void displayCurrency() { std::cout << "The currency of the bank account is " << currency << std::endl; }
    double getAmount() { return amount; }
};



int main()
{
    bankAccount acc;

    //std::cout << acc.amount << std::endl; // Won't work because the property is provate.

    std::cout << "Account balance is " << acc.getAmount() << std::endl;
}

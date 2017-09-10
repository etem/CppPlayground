#include <iostream>

class bankAccount
{
private: // Private properties can't be accessed outside of the class.
    std::string currency = "BGN";
    double amount = 10000;
public:
    bankAccount(std::string cur, int am) { setCurrency(cur); setAmount(am); } // Request default values when creating object from the class.

    //Get functions
    std::string getCurrency() { return currency; }
    double getAmount() { return amount; }

    //Set functions
    void setCurrency(std::string cur) { currency = cur; }
    void setAmount(int amm) { amount = amm; }
};



int main()
{
    bankAccount acc("EUR", 5000); // Passing the values to the constructor.


    std::cout << "Account balance is " << acc.getAmount() << " " << acc.getCurrency() << std::endl;
}

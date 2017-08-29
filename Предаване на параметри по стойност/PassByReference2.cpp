#include <iostream>

using namespace std;

int PassByReference(int &var1, int &var2)
{
    cout << "The sum of the two variables is " << var1 + var2 << endl;
    
    var1 = 0;
    var2 = 0;
}

int main()
{
    int real1 = 1;
    int real2 = 2;
    
    cout << "Value of real1 before the function is " << real1 << endl;
    
    PassByReference(real1, real2);
    
    cout << "The value of real1 after the function is  " << real1 << endl;
}



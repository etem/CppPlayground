#include <iostream>

template <class T> // Generic class template.
class MyClass
{
public:
    MyClass(T x)
    {

    std::cout << x << " - not a char!" << std::endl;
    }
};


template<> // Specialization of class template.

class MyClass<char>
{
public:
    MyClass (char x)
    {
        std::cout << x << " is a char!" << std::endl;
    }
};

/*
In the example above, the first class is the generic template, while the second is the specialization.
If necessary, your specialization can indicate a completely different behavior from the behavior of your the generic template.
*/


int main()
{
    MyClass<int> intObject(50);
    MyClass<double> doubleObject(123.2);
    MyClass<char> charObject('A');

}


/*
Output :

50 - not a char!
123.2 - not a char!
A is a char!



*/

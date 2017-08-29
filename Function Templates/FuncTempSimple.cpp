#include <iostream>

//template <class T>  - Same as below. It doesn't matter if you type class or typename T.
template <typename T>
T sum(T a, T b) // Define template function of type T
{
    return a + b;
}

int main()
{
    int x = 5;
    int y = 22;

    std::cout << sum(x,y) << std::endl;

    double a = 4.7;
    double b = 3.5;

    std::cout << sum(a,b) << std::endl; // Also works with different types.
}


#include <iostream>


template <class T> // Generic type T
/*
When creating a template type parameter, the keyword typename may be used as an alternative to the keyword class
: template <typename T>.

*/


T sum(T a, T b) // Function template
{
    return a + b;
}


int main()

{
    int a = 5, b = 22;
    double c = 2.12, d = 51.23;

    std::cout << sum(a,b) << std::endl;
    std::cout << sum(c,d) << std::endl; // sum() will work regardless of the type of given arguments



}

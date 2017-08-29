#include <iostream>


template <class T, class U> // T and U has no special meaning and can be changed.
T smaller(T a, U b) {
  return (a < b ? a : b); // ? Means  - if a is smaller return a, if b is smaller return b.
}



int main()
{
    int x = 5;
    double y = 3.3;    
    std::cout << smaller(x,y) << std::endl;

/*
The output converts to an integer,
because we specified the function template's return type to be of the same type as the first parameter (T), which is an integer.
*/

}

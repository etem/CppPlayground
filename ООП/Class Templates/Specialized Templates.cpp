#include <iostream>

using namespace std;


template <class T> // Generic template
class MyClass {
 public:
  MyClass (T x) {
   cout <<x<<" -  not a char"<<endl;
  }
};



template < > // Specialized template. It will work with char types.
class MyClass<char> {
 public:
  MyClass (char x) {
   cout <<x<<" is a char!"<<endl;
  }
};


int main()
{
    std::string x = "x";
    char y = 'y';
    MyClass <std::string> cl(x); // Will use generic template.
    MyClass <char> cls2(y); // Will use specialized emplate.
}

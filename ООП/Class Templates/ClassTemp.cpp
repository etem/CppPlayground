#include <iostream>
using namespace std;

template <class T>
class Pair {
    private:
        T first, second;
    public:
        Pair (T a, T b):
        first(a), second(b) { }
        T bigger();
};

template <class T> // Definition of bigger() outside of the class
T Pair<T>::bigger() {
    return (first>second ? first : second);
}

int main()
{
    Pair <int> obj(11, 22); // Specify type
    cout << obj.bigger() << endl;

    Pair <double> obj2(23.43, 5.68); // <int> and <double> are template parameters. They must be specified.
    cout << obj2.bigger() << endl;

    return 0;
}

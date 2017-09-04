#include <iostream>

int main()
{
    int counter = 0;

    do
    {
        std::cout << " The value of the counter is " << counter << std::endl;
        counter ++;
    }
    while(counter <= 50); // Print every value of the counter till 50
}

/*
The difference between do-while and while is that do-while will run at least once, even if the condition is false.

For example : 

int a = 42;
do {
  cout << a << endl;
  a++;
} while(a < 5);

// Outputs 42

*/	
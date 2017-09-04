#include <iostream>
#include <cstdlib>
#include <ctime>

int main()

{

    srand(time(0)); // Use current time as seed for rand() function. This way the generated numbers will be trully random.
    //srand(100); Manually specifying the seed. The same numbers will be generated on each program start.

    int arr[10];

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = rand() % 100;

        std::cout << "Filling the array with random number " << arr[i] << std::endl;
    }


}

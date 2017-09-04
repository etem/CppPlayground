#include <iostream>
#include <cstdlib>


void sumElements(int arr[] , int arrsize, int &arrsum)
{
    /*
    for(int i = 0; i < sizeof(arr); i++) -
    Sizeof(arr) will return 8 bytes because the array is not copied. Only the pointer to the first element(int) gets copied.
    For that reason we can't get array size with sizeof function.
    */
    for(int i = 1; i <= arrsize; i++)
    {
    arrsum += arr[i];
    } // There is no need to return arrsum variable because we are passing it to the function by reference.
}


void fillRandom(int *arr, int arrsize)
{
    for(int i = 1; i <= arrsize; i++)
    {
        arr[i] = rand() % 1000; // Filling the array with pseudo random numbers
    }

}

void printArray(int *arr, int arrsize)
{
    for(int i = 1; i <= arrsize; i++)
    {
        std::cout << "Element number " << i << " is : " << arr[i] << std::endl;
    }
}


int main()
{
    int anArray[20];
    int arraySum = 0;






//    for(int i = 0; i < sizeof(anArray)/sizeof(anArray[0]); i++) // This will work because it's not a function.
//    {
//
//    anArray[i] = rand() % 100; // Filling the array with pseudo random numbers
//    }

    fillRandom(anArray, 20);

    std::cout << "Elements after randomizing : " << std::endl;
    std::cout << std::endl;

    printArray(anArray, 20);

    sumElements(anArray, 20, arraySum);

    std::cout << std::endl;
    std::cout << "Total sum of the elements in the array is " << arraySum << std::endl;








}

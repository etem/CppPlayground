//Implement Array methods

/*
   arrayCreator = CreateArray(type, size)  - Линейна сложност - O(n)

   element = getElement(array, index) - Константна сложност - О(1)

   setElement(array, index , value) - Константна сложност - О(1)

   len = lenght(array) - Константна сложност - О(1)


*/


#include <iostream>
#include <cstdlib> //Library required for random number generation - rand() function.


void arrayCreator(int arr[],int arrsize) // Take an array and size and fill the elements with random number from 0 to 100;
{
    for(int i = 0; i <= arrsize; i++)
    {
        arr[i] = rand() % 100;
    }
}









int main()
{
    int x[1]; int arrsize = 0; // Initial values

    std::cout << "Please enter size for the array : " << std::endl;
    std::cin >> arrsize;
    arrsize -= 1; // Lower the value by one. Array will start counting from 1 instead of 0


    if(arrsize <= 0) // Check the value provided by user.
    {
        std::cout << "Array size cannot be zero. Exiting program.." << std::endl;
        return 0; // If 0 return the execution to main with code 0;
    }
    else if(!std::cin)
    {
        std::cout << "Please enter valid number." << std::endl;
        return 0;
    }
    else
    arrayCreator(x, arrsize); // You have to pass variable name, doesn't work with a number...



    std::cout << "Contents of the array filled with random values : " << std::endl;
    for(int i = 0; i <= arrsize; i++) //Loop through array elements and print them;
    {
        std::cout << x[i] << std::endl;
    }

    return 0;
}

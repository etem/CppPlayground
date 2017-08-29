#include <iostream>

//Memory allocation and deletion 


int main()
{
    int *s = new int; // Allocate memory for the variable on the heap.
    *s = 1010;
    
    std::cout << "The value of s is : " << *s << std::endl;
    std::cout << std::endl;
    std::cout << "Memory location of the variable is " << s << std::endl;
    std::cout << "We are goint to delete the value assigned to 's' variable" << std::endl;
    delete s; // Free up the memory allocated for variable s;

    std::cout << "After deleting, the value of 's' is : " << *s << std::endl; // Actually it is random generated.
    //Now s is dangling pointer - pointing to a blank memory location.
    std::cout << std::endl;
    
    std::cout << "Now we will give NULL value to 's'" << std::endl;
    *s = NULL; // s is now a NULL pointer - this means the value is 0.
    
    std::cout << "After the new assignment, value of 's' is : " << *s << std::endl;
    std::cout << "Memory location is : " << s << std::endl; // As you can see, location to where s points is the same even after deleting.
}


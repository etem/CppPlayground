#include <iostream>
#include <fstream> // Required for file manipulations.


int main()
{
    std::ofstream MyFile; // assign ofstream to file. Path can be provided to the constructor.
    MyFile.open("/home/bavarian/text.txt"); // If the file doesnt exist, it will be created.

    if(MyFile.is_open())
    {
    MyFile << "Some text . \n"; // Put the text into the file.

    }
    else
    {
        std::cout << "The file is open." << std::endl;
    }

    MyFile.close();

}

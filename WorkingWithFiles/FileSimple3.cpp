#include <iostream>
//#include <istream>
//#include <ostream>
#include <fstream> // Library to work with files. Includes both istream and ostream.


int main()

{
    std::fstream aFile;
    aFile.open("testCPP.txt"); // If the file doesn't exist, the function will create it.


    if(aFile.is_open())
    {
        std::cout << "The file is open and ready to be accessed." << std::endl;

        aFile << "Yep :)) \n";
    }
    else
    {
        std::cout << "The file is not open and can't be modified!" << std::endl;
    }



}



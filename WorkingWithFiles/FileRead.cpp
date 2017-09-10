#include <iostream>
//#include <istream>
//#include <ostream>
#include <fstream> // Library to work with files. Includes both istream and ostream.


int main()

{
    std::string line;

    std::ifstream aFile("text.txt"); // Open file in read mode.
    while(std::getline(aFile, line)) // Read all lines in file.
    {
        std::cout << line << std::endl;
    }

    aFile.close();

}



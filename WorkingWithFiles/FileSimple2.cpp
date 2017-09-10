#include <iostream>
//#include <istream>
//#include <ostream>
#include <fstream> // Library to work with files. Includes both istream and ostream.


int main()

{
    std::fstream aFile;

    aFile.open("testCPP.txt"); // If the file doesn't exist, the function will create it.

	//std::ofstream aFile("textCPP.txt"); The same as aFile.open() Can be used instead of open() function.


    aFile << "Hello world from Code::Blocks ;)) \n";

    aFile.close();


}



#include <iostream>
#include <string>
#include "classdeclarations.h"


int main()
{
    // Create new object from University class. New object will have the same properties as the class.
    University TU_Varna;

    // Normally these parameters can also be configured to set with constructors.

    TU_Varna.set_name("TU-VARNA");
    TU_Varna.set_location("Studentska - Varna");
    TU_Varna.set_reputation("High");
    TU_Varna.set_founded_year(1962);
    TU_Varna.set_students(2000);



    University TU_Sofia;
    TU_Sofia.set_name("TU-SOFIA");
    TU_Sofia.set_location("Kliment Ohridski - Sofia");
    TU_Sofia.set_reputation("High");
    TU_Sofia.set_founded_year(1945);
    TU_Sofia.set_students(5000);

    //Example of get functions :

    std::cout << TU_Varna.get_name() << " is founded on year " << TU_Varna.get_founded_year()  << "." << std::endl;
    std::cout << TU_Varna.get_name() << " has " << TU_Varna.get_reputation() << " reputation." << std::endl;


}

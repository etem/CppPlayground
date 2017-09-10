#include <iostream>


class University
{
private:
    int studentCount;
    std::string reputation;
public:
    //Get methods
    int getstudentCount() { return studentCount; }
    std::string getReputation() { return reputation; }

    //Set methods
    void setStudentCount(int scnt) { studentCount = scnt; }
    void setReputation(std::string rep) { reputation = rep; }

};



int main()
{
    University TuVarna;
    University *Ptr = &TuVarna; // Creating a pointer to TuVarna object
    Ptr->setReputation("High"); // Using the pointer to call object methods.

    std::cout << Ptr->getReputation() << std::endl;
//   std::cout << ""
}

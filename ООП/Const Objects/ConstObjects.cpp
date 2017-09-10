#include <iostream>


class University
{
private:
    const int studentCount = 5000;
    const std::string reputation = "High";
public:
    //Get methods
    int getstudentCount() const { return studentCount; }
    std::string getReputation() const  { return reputation; }

    void sayHello() { std::cout << "Helloo" << std::endl; }

};



int main()
{

    const University TuVarna;
    std::cout << TuVarna.getstudentCount() << std::endl;
    std::cout << TuVarna.getReputation() << std::endl;
    //TuVarna.sayHello();   - Won't work because const objects can't call non-const functions.


}

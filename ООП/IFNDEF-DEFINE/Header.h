#ifndef Header_h
#define Header_h

class University
{
private:
    int studentCount;
    std::string reputation;
public:
    int getstudentCount() { return studentCount; }
    std::string getReputation() { return reputation; }

};
#endif // Header


/*

The purpose of #ifndef and #define is to prevent a header file from being included more than once within one file.

*/

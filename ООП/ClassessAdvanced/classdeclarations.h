/* This is an example of classes, constructors, destructors and read/write access
to private class member variables with public accessible functions.
Class and member function declarations are in this header file.
The main logic is in main.cpp file located in the same directory.
*/


class University
{
public:
    University(); // Constructor. Executed when creating object from class. Has access to private class data.  If ommited, the compiler will add default one.
    ~University(); // Destructor. Executed when deleting object from class(also on program exit). If ommited, the compiler will add default one.

    // Prototypes of public class member functions which will have write access to private data.
    void set_name(std::string nam);
    void set_location(std::string loc);
    void set_reputation(std::string rep);
    void set_founded_year(int year);
    void set_students(int student_count);

    // Prototypes of public class member functions which can read private data.

    std::string get_name();
    std::string get_location();
    std::string get_reputation();
    int get_founded_year();
    int get_students();


private:
    // Private data which can be accessed only from class member functions.
    std::string name;
    std::string location;
    std::string reputation;
    int founded_year;
    int students;
};

// Constructor/Destructor declaration :


University::University()
{
    std::cout << "New university created." << std::endl;
}


University::~University()
{
    std::cout << "University with name " << name << " destroyed." << std::endl;
}


//Get functions Functions declarations:

std::string University::get_name()
{
    return name;
}

std::string University::get_location()
{
    return location;
}

std::string University::get_reputation()
{
    return reputation;
}


int University::get_founded_year()
{
    return founded_year;
}

int University::get_students()
{
    return students;
}



//Set functions declarations:


void University::set_name(std::string nam)
{
    name = nam;
}

void University::set_location(std::string loc)
{
    location = loc;
}

void University::set_reputation(std::string rep)
{
    reputation = rep;
}


void University::set_founded_year(int year)
{
    founded_year = year;
}

void University::set_students(int student_count)
{
    students = student_count;
}

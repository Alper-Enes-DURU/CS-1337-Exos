// 3_3_constructor

/*
*/
#include <iostream>

using namespace std;

class Student
{
    private:
        string name;
        int netID;
    public:
        Student(); // Default constructor
        Student(string, int);
        Student(string);
        void setNetID(int);
        void printNetID() const;
        void setName(string);
        string getName() const;
        int getNetID() const;
};

void printStud(const Student * const stuPtr);

int main()
{
    cout << "Create object stu1" << endl; // Static creation
    Student stu1;
    printStud(&stu1);

    cout << endl << "Create object stu2" << endl; // Static creation
    Student stu2("Han Solo", 101);
    printStud(&stu2);

    cout << endl << "Create object stu3" << endl; // Static creation
    Student stu3("Scotty");
    printStud(&stu3);

    // Dynamic allocation (creation)
    cout << endl << "Dynamically create object" << endl;
    Student * stuPtr = new Student("Scotty");
    printStud(stuPtr);

    cout << endl << "Dynamically create object" << endl;
    stuPtr = new Student;
    printStud(stuPtr);

    return 0;
}

void Student::setNetID(int Id) // Member function of Student class
{
    if (Id > 0)
    {
        netID = Id;
    }
    else
    {
        cout << "Error, Id must be positive" << endl;
        exit(EXIT_FAILURE);
    }
    
}

void Student::printNetID() const // Member function of Student class
{
    cout << "Student ID is " << netID << endl;
}

void Student::setName(string name_)
{
    name = name_;
}

string Student::getName() const
{
    return name;
}

int Student::getNetID() const
{
    return netID;
}

void printStud(const Student * const stuPtr)
{
    cout << endl << "Print with printStud" << endl;
    cout << stuPtr->getName() << " has netID " << stuPtr->getNetID()
    << endl;
}

Student::Student()
{
    cout << "Inside default constructor of Student" << endl;
    name = "";
    netID = 0;
}

Student::Student(string name_, int netID_)
{
    cout << "Inside constructor with 2 arguments of Student" << endl;
    name = name_;
    netID = netID_;
}

Student::Student(string name_)
{
    cout << "Inside constructor with 1 argument of Student" << endl;
    name = name_;
}
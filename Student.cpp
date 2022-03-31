#include <iostream>
#include "Student.h"

using namespace std;

void Student::setNetID(int Id)
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

void Student::printNetID() const // Member function of Student
{
    cout << "Student ID is " << netID << endl;
}

string Student::getName() const
{
    return name;
}

int Student::getNetID() const
{
    return netID;
}
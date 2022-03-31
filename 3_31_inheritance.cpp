// 3_31_inheritance

/*
    With inheritance, you can build a derived class from a base class.
    The derived class automatically inherits all the members of the base class
(variables and functions)
    In addition, the derived class may have additional members of its own.

    A base class is also called a parent class.
    A derived class is also called a child class.

    It's possible to define multiple derivations: child of a child, etc.

    A ggod way to recognize that you can use inheritance is when the
relationship is "is a". For example, a Student is a Person

    Inheritance is a fundamental concept in OOP.
*/

#include <iostream>
using namespace std;

class Person // Base class
{
    string name;
    string address;
    public:
        string getName() const
        {
            return name;
        }
        void setName(string name_)
        {
            name = name_;
        }
};

class Student : public Person // Derived class
{
    double GPA;

    public:
        double getGPA() const
        {
            return GPA;
        }
        void setGPA(double GPA_)
        {
            GPA = GPA_;
        }
};

int main()
{
    Student s;
    s.setName("C-3PO");
    cout << "Name is " << s.getName();

    s.setGPA(3.2);
    cout << "\nGPA is " << s.getGPA();

    return 0;
}
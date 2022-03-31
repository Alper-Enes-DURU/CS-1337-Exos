// 3_22_copy_constructor

/*
    A copy constructor is a constructor that is automatically called when an object
is created and initialized with another object:
    1) Student s2 = s1;
    2) An object is passed by value to a function // Function parameter is created
and initialized with the argument.
    Note that if the creation and initialization are not in the same statement, it
won't invoke the copy constructor. Example:
    Student s2; // Default constructor
    s2 = s1;

    If you don't write a copy constructor, the default one will do member assignment, 
which may be a problem if a member is a pointer.

    Copy constructor must have this parameter list: (const className & src_obj)

    Pass by reference because if we pass by value, the CC will automatically call the
CC, which will call the CC again, etc. --> endless loop

    const because the copy constructor is not supposed to modify the object we
copy from (src_obj)
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Student
{
    private:
        string name;
        int numTests;
        double * scoresPtr;
    public:
        Student(string, int); // Constructor
        Student(const Student &); // Copy constructor
        ~Student(); // Destructor
        void printStud() const;
        void setScore(double, int);
    private:
        void initScores(double); // Private member function
};

int main()
{
    int numTests;
    double score;
    cout << "Enter the number of tests: ";
    cin >> numTests;

    Student s("Kylo", numTests);
    for (int i = 0; i < numTests; i++)
    {
        cout << "Enter score for test " << (i + 1) << ": ";
        cin >> score;
        s.setScore(score, i);
    }

    s.printStud();
    cout << endl;

    Student s2 = s; // Copy constructor will be invoked
    cout << endl << "s2:" << endl;
    s2.printStud();

    s2.setScore(85, 0);
    cout << endl << "s2:" << endl;
    s2.printStud();

    cout << endl << "s:" << endl;
    s.printStud();
    cout << endl;
    
    return 0;
}

Student::Student(string name_, int numTests_) // Constructor
{
    cout << "In Student constructor" << endl;
    name = name_;
    numTests = numTests_;
    scoresPtr = new double[numTests];
    initScores(0);
}

Student::~Student() // Destructor
{
    cout << "In destructor of Student" << endl;
    delete [] scoresPtr;
}

void Student::printStud() const
{
    cout << "Student " << name << " took " << numTests
    << " tests" << endl;

    for (int i = 0; i < numTests; i++)
    {
        cout << setw(8) << scoresPtr[i];
        if ((i+1) % 5 == 0)
            cout << endl;
    }
}

void Student::setScore(double score, int ind)
{
    scoresPtr[ind] = score;
}

void Student::initScores(double val)
{
    for (int i = 0; i < numTests; i++)
    {
        scoresPtr[i] = 0;
    }
}

Student::Student(const Student & s) // Copy constructor
{
    name = s.name;
    numTests = s.numTests;
    scoresPtr = new double[numTests];

    for (int i = 0; i < numTests; i++)
    {
        scoresPtr[i] = s.scoresPtr[i];
    }
}
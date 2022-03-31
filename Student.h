#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int netID;
    public:
        void setNetID(int);
        void printNetID() const;
        void setName();
        string getName() const;
        int getNetID() const;
};

#endif
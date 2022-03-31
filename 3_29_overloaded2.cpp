// 3_29_overloaded2

/*
   To enable multi-assignments with the overloaded =, 
   e.g. obj3 = obj2 = obj1;
   obj3 = obj2.operator=(obj1)
   the member function, when called by obj2, should return obj2.
    
    To do that, use return *this;

    "this" is a predefined pointer that points to the calling object.
    "this" is automatically passed as a hidden argument to all 
non-static member functions --> Available for use
    "this" is not available for use in a static member function

    Most operators can be overloaded: <, <=, >, ==, ++(postfix/prefix),
decrement (postfix/prefix), etc.
*/

#include <iostream>
#include <cmath>  
using namespace std;

class Pt2D
{
    private:
        double x, y;
    public:
        Pt2D(double x_, double y_)
        {
            x = x_;
            y = y_;
        }

        bool operator==(const Pt2D & rhs)
        {
            return ((x == rhs.x) && (y == rhs.y));
        }

        bool operator<(const Pt2D & rhs)
        {
            return ((x + y) < (rhs.x + rhs.y));
        }

        bool operator>(const Pt2D & rhs)
        {
            return ((x + y) > (rhs.x + rhs.y));
        }

        Pt2D operator=(const Pt2D & rhs)
        {
            x = rhs.x;
            y = rhs.y;
            return *this; // Return the current object
        }

        bool operator<=(const Pt2D & rhs)
        {
            return ((*this == rhs) || (*this < rhs));
        }

        // p2 = ++p1;  // prefix incrementation, increment p1, then assign to p2
        // p2 = p1.operator++();
        // 
        // p2 = p1++; // Postfix increment, assign to p2, then increment p1

        Pt2D operator++() // Prefix increment
        {
            ++x;
            ++y;
            return *this;
        }

        Pt2D operator++(int) // "int" is a dummy parameter to indicate it's postfix
        {
            Pt2D temp(x, y); // or Pt2D temp = *this; 
            x++;
            y++;
            return temp;
        }

        void printPt2D() const
        {
            cout << "x = " << x << ", y = " << y << endl;
        }
};

int main()
{
    Pt2D p1(10, 100), p2(20, 200), p3(30, 300);

    cout << "p1:\n";
    p1.printPt2D();

    cout << "p2:\n";
    p2.printPt2D();

    cout << "p3:\n";
    p3.printPt2D();

    // Multi-assignment
    p3 = p2 = p1;
    cout << "\np3 after p3 = p2 = p1:\n";
    p3.printPt2D();

    // Overloaded <
    if (p1 < p1)
        cout << "(p1 < p2) is true" << endl;
    else
        cout << "(p1 < p2) is false" << endl;

    // Prefix increment
    p2 = ++p1;
    cout << "\np1 after p2 = ++p1:\n";
    p1.printPt2D();
    cout << "p2:\n";
    p2.printPt2D();

    // Postfix increment
    p2 = p1++;
    cout << "\np1 after p2 = p1++:\n";
    p1.printPt2D();
    cout << "p2:\n";
    p2.printPt2D();

    // Overloaded <=
    if (p1 <= p2)
        cout << "(p1 <= p2) is true\n";
    else
        cout << "(p1 <= p2) is false\n";




    return 0;
}
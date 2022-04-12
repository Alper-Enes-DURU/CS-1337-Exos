#include <iostream>

using namespace std;

class Circle
{
    int radius;
    public:
        Circle(int radius_)
        {
            radius = radius_;
        }
        

};

int main()
{
    // Define an array of two Circles, with radius 10 and 20
    Circle arr[] = {Circle(10), Circle(20)};
    Circle * cPtr = arr;

    // Write code to print the radius of the second array element
    cout << arr[1].getRadius();
    cout << cPtr[1].getRadius();
    cout << (*(cPtr + 1)).getRadius();
    cout << (cPtr + 1)->getRadius();
    cout << (*(arr + 1)).getRadius();
    cout << (arr + 1)->getRadius();

    return 0;
}
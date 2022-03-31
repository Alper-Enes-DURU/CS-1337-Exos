// 2_8_malloc

/* 
    With dynamic memory allocation, a program, during execution,
    can request a chunk of memory large enough to hold a variable
    or an array of a specific type

    The computer gives the address of the chunk
    Program needs a pointer to save the address

    Useful when we don't know how much memory we need
    when we write the source code

    When we are done with the memory, we should release it
    using "delete"
*/

#include <iostream>

using namespace std;

int main()
{
    int numTests;

    cout << "Enter the number of tests: ";
    cin >> numTests;

    // Dynamically allocate an array of the right size
    double * testPtr = new double[numTests];

    // Use the array
    for(int i = 0; i < numTests; i++)
    {
        cout << "Enter the score: ";
        cin >> testPtr[i]; // cin >> *(testPtr + i)
    }

    cout << "Test scores are: " << endl;
    for(int i = 0; i < numTests; i++)
        cout << *(testPtr + i) << endl;

    // Dynamically allocate a single variable
    int * intPtr = new int;

    // code to use the array and the int

    // Release the memory when no longer needed
    delete [] testPtr;
    delete intPtr;
    intPtr = nullPtr; // since it is still available, it can be used
}
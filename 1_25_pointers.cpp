// 1_25_pointers

/* 
The & (address) operator gives the address of a variable
A pointer is a variable that holds an address
Like all variables, a pointer has a name, a memory location and a type
Examples of pointer types: pointer to an int (int *), ptr to a double (double *), ptr to a char (char *)
To access the value pointed at by a ptr, use the indirection operator to dereference the pointer.
Do not confuse the '*' of the indirection with the '*' used to define a pointer
Beside an actual address, nullptr is a special value you can assign to a pointer.
*/
#include <iostream>

using namespace std;

int main()
{
    int num = 7;

    int * numPtr; // Define a pointer called numPtr, pointing to an int. Good practice is to end the
    // name with "Ptr"

    numPtr = &num; // Into the pointer, I store the address of num

    // Dereference the pointer with indirection operator
    cout << "Value pointed at by numPtr is " << *numPtr << endl;
    cout << "Address of num is " << &num << endl;
    cout << "Content of pointer is " << numPtr << endl;

    numPtr = nullptr;
    cout << "Content of pointer is " << numPtr << endl;
}
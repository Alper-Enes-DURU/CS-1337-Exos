// 1_27_ptrs_parameters

/*
A pointer can be an argument to a function
With pointers, the function can modify the original data
Works like reference variables
Difference is that with ref variables, we cannot assign an address
or do pointer arithmetic

1) Use * in paramter list in prototype and header to indicate it's a pointer
2) Use * (indirection operator) inside the function to access the data
3) Pass an address as argument at function call
*/

#include <iostream>

using namespace std;

void swapByPtr(double * dbPtr1, double * dbPtr2);
void swapByRef(double & db1, double & db2);

int main()
{
    double d1 = 10.5, d2 = 5.6;

    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
    swapByRef(d1, d2);
    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;
    swapByPtr(&d1, &d2); // Pass addresses
    cout << "d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}

void swapByPtr(double * dbPtr1, double * dbPtr2)
{
    double temp = * dbPtr1; // Use indirection operator
    * dbPtr1 = * dbPtr2;
    * dbPtr2 = temp;
    dbPtr2 = dbPtr2 + 1; // This is not possible with ref variables
}

void swapByRef(double & db1, double & db2)
{
    double temp = db1;
    db1 = db2;
    db2 = temp;
}
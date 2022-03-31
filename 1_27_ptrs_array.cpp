// 1_27_ptrs_array

/*
Array name is starting address of array
Array name can be used like a constant pointer (you are not allowed to change its value)
Everything about pointers applies to array names, except you cannot modify them.
You can use an array name like a pointer, e.g. *arr
You can use a ptr like an array name, e.g. intPtr[1]
Pointer arithmetic: Value of (intPtr + i) = intPtr + i * (size of an element)
(intPtr + i) will point to the location i elements down from intPtr
*(intPtr + i), *(arr + i), arr[i], intPtr[i] are equivalent, assuming intPtr points to arr
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Array name is starting address of array" << endl;

    const int SIZ = 4;
    int arr[SIZ] = {10, 20, 30, 40};

    cout << "Value of arr[0] is " << arr[0] << endl;
    cout << "Address of arr is " << arr << endl;
    cout << "Address of arr[0] is " << &arr[0] << endl;

    // Pointers can be used like an array name
    int * intPtr = arr;
    cout << endl << "Pointers can be used like an array name" << endl;
    cout << "Display array content using intPtr[i] notation" << endl;
    for (int i = 0; i < SIZ; i++)
        cout << intPtr[i] << endl;

    // Array name can be used like a constant pointer
    cout << endl << "Array name can be used like a constant pointer" << endl;
    cout << "Display array content using *arr notation" << endl;
    cout << "*arr is " << *arr << endl; // Dereference the array name, as with a pointer

    // Pointer arithmetic
    cout << "Value of intPtr is " << intPtr << endl;
    cout << "Value of (intPtr + 1) is " << (intPtr + 1) << endl;
    cout << "Value of (intPtr + 2) is " << (intPtr + 2) << endl;
    cout << "Value of (intPtr - 1) is " << (intPtr - 1) << endl;
    cout << "One int takes " << sizeof(int) << " bytes" << endl;

    // Use ptr arithmetic on a pointer to access the elements of an array
    cout << endl << "Use *(intPtr+i) notation to access array elements" << endl;
    intPtr = arr;

    for (int i = 0; i < SIZ; i++)
        cout << *(intPtr + i) << endl; // *(intPtr + i) is the same as intPtr[i]

    // Use ptr arithmetic on the array name to access the elements of an array
    cout << endl << "Use *(arr + i) notation to access array elements" << endl;

    for (int i = 0; i < SIZ; i++)
        cout << *(arr + i) << endl; // *(arr + i) is the same as arr[i]

    return 0;
}  
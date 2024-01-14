#include <iostream>

using namespace std;
//Introduction to pointers
//knowledge of size of data types may be necessary
// int = 4 bytes
// double = 8 bytes
//
int main()
{
<<<<<<< HEAD:c++ files/beginnerLesson/More info on Data types/main.cpp

    int x;

    cout << sizeof(x) << endl;
    return 0;
=======
    int x = 5;
    int *y = &x;
    // *y is a pointer, pointers do not have a value, value of a pointer must point to an address
    //&x is the address or also called the deference operator
    // int pointer can only point an int address

    cout << *y << endl; // this displays the value the pointer points to
    cout<< &y <<endl;// this displays the address of y
    cout << &x << endl;// this displays the address of x
    cout << y << endl; // this displays the address of y as y is a pointer to the address of x
    // you must use the same data type to use pointers
    *y = 70;
    cout << *y << endl;
>>>>>>> c673d1b99d8f48928b6a15217e3c592ad96eda81:c++ files/pointers/main.cpp
}

#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return x + y;
}
int addition(int x, int y, int z)
{
    return x + y + z;
}
//the function to be run is determined by the number of arguments passed.
float addition(float a, float b)
{
    return a + b;
}// to call this function in the main function you must cast the arguments to a float as the arguments are usually considered as doubles and not floats
int main()
{
   // int x;
   // x = addition(5, 5);// this is saved to remember a syntax of writing functions
    //cout << addition(5, 5) << endl; // this line calls the int addition function
    cout << addition(static_cast<float>(5.2), static_cast<float>(5.2));
// in a float function you must cast the variable  double to float as the value in decimal is usually considered a double.
}


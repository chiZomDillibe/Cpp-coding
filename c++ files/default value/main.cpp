#include <iostream>

using namespace std;
//default values are important when you want to create variables in functions that can be overwritten

void summation (int a = 5, int b = 1);
//the 5 and 1 are default values. Default values are only added at the declarations.
// default values are given from the back and not from the front.
int main()
{
    int x;
    int y;


    cout << "Enter the first value" << endl;
    cin >> x;

    cout << "Enter the second value" << endl;
    cin >> y;

    //summation(x,y);
    summation();
    return 0;
}
void summation (int a, int b)
{
    cout << "the summation of a and b is "<< a+b << endl;
}
//prototypes are not given default values

#include <iostream>

using namespace std;

//Pass by value and pass by reference works with transferring of data from one function to another.
//

void passByValue(int z)
{
    z = 20;
    cout << "z is having a value of" << z << endl;
}

void passByReference(int& r)
// to pass a value by reference use the ampersand sign "&"
// pass by reference makes variables dependent on each other, x in passbyreference(x) depends on the int& r.
{
    r = 100;
    cout << "r is having a value of" << r << endl;
}

int main()
{
    int x = 50;
    //passByValue(x);
    passByReference(x);
    cout<<"x is having a value of "<< x << endl;
}

#include <iostream>
using namespace std;

char name[20] = "Programming";

int main()
{
    for (int x = 0; x < 20; x++)
    {
        cout << name[x] << endl;
    }
    //this block of code above is used to illustrate creativity with array.
    // main casting begins below
    float y = 12.56;
    //casting from float to integer
    cout << static_cast<int>(y) << endl;

    //dynamic casting
    cout << int(y) << endl;
}

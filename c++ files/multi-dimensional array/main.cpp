#include <iostream>

using namespace std;

int main()
{
    /*int age[1][3] = { {0,1,2} };
    cout <<age[0][1]<<endl;
    return 0;
    */
    // multi-dimensional arrays are not important when it is only one row
    // second multidimensional array below
    int age [3][4] = {{10,12,9,11},
                      {14,13,12,15},
                      {15,16,17,20}};

    cout<<"the first age in jss3 is" << age[2][0]<< endl;
    cout<<"the second age in jss3 is" << age[2][1]<< endl;
    cout<<"the third age in jss3 is" << age[2][2]<< endl;
    cout<<"the fourth age in jss3 is" << age[2][3]<< endl;


}

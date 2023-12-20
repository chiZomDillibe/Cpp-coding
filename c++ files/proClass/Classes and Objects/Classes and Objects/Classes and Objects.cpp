// Classes and Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class studentDataClass
{
    //the first thing you do here is to state your specifier
    //there is the private,protected and public specifier
private:
    //members declared here can only be used by the class
protected:
    //members can be used by the base class and the derived class
public:
    //members can be accessed outside the base class 
    int age;
    float height;
    string name;
    int mathScore;
    int englishScore;
    int scienceScore;

}john,mary;

int main()
{
    john.age = 12;
    john.height = 5.7;
    john.name = "John Obi";
    john.mathScore = 70;
    john.englishScore = 50;
    john.scienceScore = 40;

    cout << "Hello World!\n" << endl;
}



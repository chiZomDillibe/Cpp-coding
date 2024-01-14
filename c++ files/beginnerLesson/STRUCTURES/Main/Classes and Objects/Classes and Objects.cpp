#include "studentDataClasss.h"
#include <iostream>
using namespace std;

class studentDataClass {
private:



public:
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
    cout << "john is "<< john.age<< "years" << endl;
}



#include <iostream>

using namespace std;

struct firstSemesterResult
{
    int englishScore;
    int mathScore;
};

void displayData(firstSemesterResult student1)
{

     cout << "the student math score is " << student1.mathScore << endl;
     cout << "the student english score is " << student1.englishScore << endl;

}
//ensure the compiler reads the function you are about to call in that function before calling it

void collectData(){
    // to use an object of a structure in a function you must declare the object in that function
    // if the object is to be used in another function find a way to link the objects to the two functions'
    //one way of linking is by making the struct and the obj the parameter of a function
    firstSemesterResult student1;

    cout << "enter the student's math score" << endl;
    cin >> student1.mathScore;

    cout << "enter the student's english score" << endl;
    cin >>  student1.englishScore;

    cout << endl << endl;
    displayData(student1);
}


int main()
{
 collectData();


}

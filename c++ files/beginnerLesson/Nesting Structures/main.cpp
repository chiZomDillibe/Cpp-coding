#include <iostream>

using namespace std;

struct academicReport
{
    int mathScore;
    int englishScore;
    int scienceScore;
};

struct studentData
{
    string firstName;
    string lastName;
    int age;
    float height;
    academicReport academicReportObject;
    // to nest a structure you create an object of the structure to be nested in another structure
    // the concept above is that every student must have a score for each subject and they must also have all the details
    // required in the studentData structure so we need to nest the two structures as they have what is needed
    // the other method of creating objects can't be used to nest structures
    // pay attention to the hierarchy. Don't put the structure to be nested after the main structure
};
int main()
{
    studentData student1;
    studentData student2;


    student1.firstName = "john";
    student1.lastName = "obi";
    student1.age = 13;
    student1.height = 4;
    student1.academicReportObject.mathScore = 34;
    student1.academicReportObject.englishScore = 45;
    student1.academicReportObject.scienceScore = 67;


    student2.firstName = "john";
    student2.lastName = "peter";
    student2.age = 13;
    student2.height = 4;
    student2.academicReportObject.mathScore = 34;
    student2.academicReportObject.englishScore = 45;
    student2.academicReportObject.scienceScore = 67;

    cout<<"student 1 has an age of  "<<student1.age<<endl;
    cout<<"student 2 has an age of  "<<student2.age<<endl;



    cout << "Hello world!" << endl;
    return 0;
}

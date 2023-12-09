#include <iostream>

using namespace std;

//Structures
// basic anatomy of a structure includes: the structure name,the members

struct studentData
{
    string firstName;
    string lastName;
    int age;
    float height;
}student1,student2,student3;//to add objects to a structure you add them aftere


int main()
{
    student1.firstName = "John";
    student1.lastName = "Obi";
    student1.age = 13;
    student1.height = 3.7 ;

    student2.firstName = "Mary";
    student2.lastName = "Alli";
    student2.age = 11;
    student2.height = 2.9;

    cout<<"the first student age is :"<<student1.age<<endl;
    cout<<"the second student name is :"<<student.firstname<<endl;

}

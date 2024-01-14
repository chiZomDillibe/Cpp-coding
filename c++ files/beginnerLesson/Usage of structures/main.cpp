#include <iostream>

using namespace std;

struct studentData
{
    string name;
    int age;
    int englishScore;
    int mathScore;
    int scienceScore;
};

int main()
{
    //this is a new way of declaring objects in the main function
    studentData student1;
    studentData student2;

    cout<<"enter the first student name"<<endl;
    //cin>>student1.name; this code won't collect the name in more than one line
    getline(cin,student1.name);

    cout<<"enter the first student age"<<endl;
    cin>>student1.age;

    cout<<"enter the student math score"<<endl;
    cin>>student1.mathScore;

    cout<<"enter the student english score"<<endl;
    cin>>student1.englishScore;

    cout<<"enter the student science score"<<endl;
    cin>>student1.scienceScore;


    cout<<endl<<endl;
    cout<<"enter the data for the second student below"<<endl;

    cout<<"enter the second student name"<<endl;
    //cin>>student2.name;//get line does not work well with struct
    cin>>student2.name;

    cout<<"enter the second student age"<<endl;
    cin>>student2.age;

    cout<<"enter the student math score"<<endl;
    cin>>student2.mathScore;

    cout<<"enter the student english score"<<endl;
    cin>>student2.englishScore;

    cout<<"enter the student science score"<<endl;
    cin>>student2.scienceScore;



    cout<<endl<<endl;
    cout<<" data for the first student below"<<endl;

    cout<<" the first student name"<< student1.name<<endl;
    //cin>>student2.name;//get line does not work well with struct


    cout<<"first student age"<<student1.age<<endl;

    cout<<"student math score"<<student1.mathScore<<endl;

    cout<<"the student english score"<<student2.englishScore<<endl;

    cout<<"student science score"<<student1.scienceScore<<endl;



// structures can have as many objects as possible and these objects do not interfere with each other


    cout << "Hello world!" << endl;
    return 0;
}

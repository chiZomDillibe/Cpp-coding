#include "childClass.h"
childClass::childClass(/*int height, string name*/)
{
	/*
	this->height = height;
	this->name = name;
	cout << "the child is " << this->height << "ft tall" << endl;
	cout << "the child name is  " << this->name << endl;
	*/
	cout << "John is " << john << " years old " <<endl;
	cout << "  I am child class constructor " << endl;	
}
/*childClass::childClass(int fatherAge, int motherAge, string motherName, string fatherName) // this is the derived class
:fatherClass(fatherAge, fatherName), Motherclass(motherAge,motherName) 
//mother()

{
	cout << "the mother age is " << Motherclass::age << endl;
	cout << "the father age is " << fatherClass::age << endl;
	cout << "the mother name is " << Motherclass::name << endl;
	cout << "the father name is " << fatherClass::name << endl;

	//cout << "the mother age is " << mother.age << endl;
	display();
}*/

childClass::~childClass()
{
	cout << "I am child class destructor" << endl;
}
void childClass::display(int age)
{

}
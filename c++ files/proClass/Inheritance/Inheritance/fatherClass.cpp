#include "fatherClass.h"
fatherClass::fatherClass(int age, string name)
{
	this->age = age;
	this->name = name;
	cout << "I am the father class " << endl;
}


fatherClass::~fatherClass()
{
	cout << "I am the father class destructor" << endl;
}

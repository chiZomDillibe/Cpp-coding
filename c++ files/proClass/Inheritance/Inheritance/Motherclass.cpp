#include "Motherclass.h"

Motherclass::Motherclass(int age, string name)// this is the base class
{
	this->age = age;
	this->name = name;
	cout << "this is the motherclass constructor" << endl;
}

Motherclass::~Motherclass()
{
	cout << "I am the motherclass destructor" << endl;
}

void Motherclass::display()
{
	cout << "this is a motherclass function" << endl;
}
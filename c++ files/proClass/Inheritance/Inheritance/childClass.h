#pragma once
#include <iostream>
using namespace std;
#include "Motherclass.h"
#include "fatherClass.h"
//class childClass:public Motherclass,public fatherClass
enum shortCuts
{
	john = 14, mary =17, jamie =15
};
class childClass
{
public:
	childClass(/*int height = 7, string name = "stella"*/);
	//childClass(int fatherAge, int motherAge,string motherName,string fatherName);
	//this is done when you want to pass arguments dynamically and not statically
	//Motherclass mother;

	~childClass();
private:
	int height; 
	string name;

	void display(int age = 90);

protected:
};


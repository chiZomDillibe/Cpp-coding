#pragma once

#include <iostream>
using namespace std;

class Motherclass
{
public:
	Motherclass(int age, string name);
	~Motherclass();
	

private:
protected:

	int age;
    string name;
	void display();
};


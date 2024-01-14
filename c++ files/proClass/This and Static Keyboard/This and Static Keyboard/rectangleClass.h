#pragma once
#include <iostream>
using namespace std;
class rectangleClass
{
public:

	rectangleClass(int length, int height);

	void displayArea();
	static int thickness;
	
private:
	int height;
	int length;
protected:
};


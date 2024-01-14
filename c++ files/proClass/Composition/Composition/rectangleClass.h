#pragma once
#include "square.h"
#include <iostream>
using namespace std;

class rectangleClass
{
public:
	rectangleClass(int length, int height);
	void displayArea();

	//creating an object of square class
	square square;
private:
	int height;
	int length;
protected:
};


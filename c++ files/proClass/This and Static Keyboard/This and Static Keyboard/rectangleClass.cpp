#include "rectangleClass.h"

rectangleClass::rectangleClass(int length, int height)
{
	this->length = length;
	this->height = height;
}

void rectangleClass::displayArea()
{
	cout << "the area of the rectangle is : " << length * height << endl;
}

int rectangleClass::thickness = 90;

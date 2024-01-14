#include "rectangleClass.h"
rectangleClass::rectangleClass(int length, int height)
	
{
	this->height = height;
	this->length = length;
}

void rectangleClass::displayArea()
{
	cout << "the area of the rectangle is : " << length * height <<endl;
	square.displayArea();
}



#include "rectangleClass.h"
rectangleClass::rectangleClass(int x, int y)
{
	height = x;
	length = y;
}

rectangleClass::rectangleClass(int x, int y, int t)
{
	height = x;
	length = y;
	thickness = t;
}

void rectangleClass::area()
{
	cout << "The area of the rectangle is : " << length * height << endl;
}

void rectangleClass::volumes()
{
	cout << "the volume of the cube is : " << length * height * thickness << endl;
}


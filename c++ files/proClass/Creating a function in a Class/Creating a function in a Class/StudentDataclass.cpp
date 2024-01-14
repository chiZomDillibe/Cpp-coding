#include "StudentDataclass.h"

void StudentDataclass::display()
{
	cout << "I am studentDataClass function" << endl;
}

void StudentDataclass::area(int x, int y)
{
	height = y;
	width = x;

	cout << "your area is:" << height * width << endl;
}
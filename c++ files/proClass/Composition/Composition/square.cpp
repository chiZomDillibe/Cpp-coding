#include "square.h"
square::square()
{
	length = 10;
}

void square::displayArea()
{
	cout << "the area of the square is : " << length * length <<endl;
}

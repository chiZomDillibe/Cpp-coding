#pragma once
#include <iostream>
using namespace std;

class rectangleClass
{
public:
	rectangleClass(int x, int y);
	rectangleClass(int x, int y, int t);
	void area();
	void volumes();

private:
	int length;
	int height;
	int thickness;

protected:
};


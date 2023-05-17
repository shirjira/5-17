#pragma once
#include <iostream>
using namespace std;
class Shape
{
public:
	Shape(int, int);
	virtual int area();
protected:
	int width, height;


};


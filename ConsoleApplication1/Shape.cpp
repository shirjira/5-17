#include "Shape.h"

Shape::Shape(int a=0, int b=0) 
{
	width = a;
	height = b;	
}
int Shape::area()
{
	cout << "�����OShape�����n�p�⤽��:" << width * height << endl;
	return width*height;
}
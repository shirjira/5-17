#include "Rectangle.h"

Rectangle::Rectangle(int a = 0, int b = 0) : Shape(a, b)
{
}
int Rectangle::area()
{
	cout << "�l�����ORectangle�����n�p�⤽��:" << width * height << endl;
	return width * height;

}
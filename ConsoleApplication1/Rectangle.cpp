#include "Rectangle.h"

Rectangle::Rectangle(int a = 0, int b = 0) : Shape(a, b)
{
}
int Rectangle::area()
{
	cout << "衍生類別Rectangle的面積計算公式:" << width * height << endl;
	return width * height;

}
#include "Triangle.h"
Triangle::Triangle(int a = 0, int b = 0) :Shape{ a, b }
{

}

int Triangle::area()
{
	cout << "衍生類別Triangle的面積計算公式:" << (width * height) / 2 << endl;
	return (width * height) / 2;
}

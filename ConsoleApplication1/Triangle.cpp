#include "Triangle.h"
Triangle::Triangle(int a = 0, int b = 0) :Shape{ a, b }
{

}

int Triangle::area()
{
	cout << "�l�����OTriangle�����n�p�⤽��:" << (width * height) / 2 << endl;
	return (width * height) / 2;
}

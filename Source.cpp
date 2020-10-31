#include <iostream>
#include "Header.h"

using namespace std;

Points :: Points(string n, float xx, float yy)
{
	name = n;
	x = xx;
	y = yy;
}

void Points::load()
{
	cout << "Podaj x: ";	cin >> x;
	cout << "Podaj y: ";	cin >> y;
	cout << "Nazwa punktu: ";	cin >> name;
}

Rectangle::Rectangle(string  n, float  xx, float  yy, float  w, float  h)
{
	name = n;
	x = xx;
	y = yy;
	width = w;
	height = h;
}

void Rectangle::load()
{
	cout << "Podaj x lewego dolnego rogu prostokata: "; cin >> x;
	cout << "Podaj y lewego dolnego rogu prostokata: "; cin >> y;
	cout << "Podaj szerokosc prostokata: "; cin >> width;
	cout << "Podaj wysokosc prostokata: "; cin >> height;
}

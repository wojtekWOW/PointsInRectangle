#include <iostream>
#include "Header.h"

using namespace std;

void imputControl(float x)
{
	while (!(cin >> x))
	{
		cout << "Podaj liczbe! ";
		cin.clear();
		cin.ignore(9999, '\n');
	}
}

Points :: Points(string n, float xx, float yy)
{
	name = n;
	x = xx;
	y = yy;
}

void Points::load()
{
	cout << "Podaj x: ";	
	imputControl(x);
	cout << "Podaj y: ";	
	imputControl(y);
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
	cout << "Podaj x lewego dolnego rogu prostokata: "; 
	imputControl(x);
	cout << "Podaj y lewego dolnego rogu prostokata: "; 
	imputControl(y);
	cout << "Podaj szerokosc prostokata: "; 
	imputControl(width);
	cout << "Podaj wysokosc prostokata: "; 
	imputControl(height);
	cout << "Nazwa prostokata: ";	cin >> name;
}

#include <iostream>

using namespace std;

class Rectangle;

class Points
{
	string name;
	float x, y;

public:
	Points(string = "A", float = 0, float = 0);
	void load();

	friend void judge(Points pkt, Rectangle r);
};

class Rectangle
{
	string name;
	float x, y, width, height;

public:
	Rectangle(string = "rec", float = 0, float = 0, float = 1, float = 1);
	void load();
	friend void judge(Points pkt, Rectangle r);
};
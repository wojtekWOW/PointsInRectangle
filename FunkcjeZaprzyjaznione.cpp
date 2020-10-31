#include <iostream>
#include "Header.h"

using namespace std;

void judge(Points pkt, Rectangle r)
{
	if ((pkt.x >= r.x) && (pkt.x <= r.x + r.width) && (pkt.y >= r.y) && (pkt.y <= r.y + r.height))
	{
		cout << endl << "Punkt " << pkt.name << " nalezy do prostokata " << r.name << endl;
	}
	else
		cout << endl << "Punkt " << pkt.name << " nie nalezy do prostokata " << r.name << endl;

}

int main()
{
	Points pkt1("A", 3, 1);
	pkt1.load();

	Rectangle r1("R1", 0, 0, 6, 4);
	r1.load();
	judge(pkt1, r1);
}

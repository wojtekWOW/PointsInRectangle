// FunkcjeZaprzyjaznione.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

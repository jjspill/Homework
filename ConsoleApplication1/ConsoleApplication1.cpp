// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*(class homework 
{
public:
	string p1, p2, p3, p4, p5, p6, p7;
};*/

int main() {
	int i = 1;
	string p1, p2, p3, p4, p5, p6, p7;
	if (i < 8) {
		cout << " What is your homework for period " << i << endl;
		cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7;
		i++;
	}
	cout << endl;
	cout << "1: " << p1 << endl;
	cout << "2: " << p2 << endl;
	cout << "3: " << p3 << endl;
	cout << "4: " << p4 << endl;
	cout << "5: " << p5 << endl;
	cout << "6: " << p6 << endl;
	cout << "7: " << p7 << endl;
    return 1;
}


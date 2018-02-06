// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void printhw(string homework[]);

int main() {
	string homework[7];
	cout << "What homework do you have today?" << endl;
	for (int i = 0; i < 7; i++) {
		cin >> homework[i];
	}
	printhw(homework);
	cout << homework[1];
}

void printhw(string homework[]) {
	for (int i = 0; i < 7; i++) {
		cout << (i + 1) + ": " + homework[i];

	}
}

// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <sstream>
#include <array>

using namespace std;
struct assignments {
    string name;
    bool done;
}
void printhw(std::array<string, 7> homework);

int main() {
	std::array<string, 7> homework;
	cout << "What homework do you have today?" << endl;
	for (int i = 0; i < 7; i++) {
		cin >> homework[i];
	}
	printhw(homework);
	cout << homework[1];
}

void printhw(std::array<string, 7> homework) {
	for (int i = 0; i < 7; i++) {
		cout << (i + 1) << ": " << homework[i] << endl;
	}
}
//post print- assignments
//files
//serialization

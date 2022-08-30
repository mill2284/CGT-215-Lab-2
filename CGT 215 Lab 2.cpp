// CGT 215 Lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	//Having user input a value for A and assigning it to the variable A
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;

	//Having user input a value for B and assigning it to the variable B
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;

	//Telling user we are calculating for x, calculating it, then displaying the value of X
	cout << "Calculating x for " << A << "x+" << B << "=0" << endl;
	X = (-B) / A;
	cout << "X=" << X << endl;

}

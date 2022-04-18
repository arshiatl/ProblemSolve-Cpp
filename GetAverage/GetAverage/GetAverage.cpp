// GetAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	float avg;
	cout << "Enter your first number : ";
	cin >> num1;

	cout << "Enter your second number : ";
	cin >> num2;

	cout << "Enter your thired number : ";
	cin >> num3;

	cout << "The average is : ";
	avg = (float)(num1 + num2 + num3) / 2;
	cout << avg;

	system("pause>0");
}

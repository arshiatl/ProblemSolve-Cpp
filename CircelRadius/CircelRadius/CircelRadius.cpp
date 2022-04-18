#include <iostream>
#include <conio.h>
#define PI 3.14

using namespace std;

int main()
{
	int r;
	cout << "Enter the radius : ";
	cin >> r;

	float x;
	x = PI * r * r;
	cout << "Area = " << x;

}


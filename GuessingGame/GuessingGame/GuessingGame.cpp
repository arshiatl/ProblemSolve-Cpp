#include <iostream>

using namespace std;

int main()
{
	int hostUserNumber, guestUserNumber;
	cout << "Host : ";
	cin >> hostUserNumber;

	system("cls");

	cout << "Guest : ";
	cin >> guestUserNumber;

	if (hostUserNumber == guestUserNumber) {

		cout << "Correct !";
	}
	else {

		cout << "Failed !";
	}
	

	system("pause>0");
}

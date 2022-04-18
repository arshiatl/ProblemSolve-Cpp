#include <iostream>

using namespace std;

int main()
{
	float num1, num2;
	char opration;

	cout << " ** AK Calculator **" << "\n";
	cin >> num1 >> opration >> num2;

	switch (opration)
	{
		case '+':
			cout << num1 << " " << opration << " " << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout << num1 << " " << opration << " " << num2 << " = " << num1 - num2;
			break;
		case '*':
			cout << num1 << " " << opration << " " << num2 << " = " << num1 * num2;
			break;
		case '/':
			cout << num1 << " " << opration << " " << num2 << " = " << num1 / num2;
			break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int = ((int)num1 == num1);
			isNum2Int = ((int)num2 == num2);

			if(isNum1Int && isNum2Int) {

				cout << num1 << " " << opration << " " << num2 << " = " << (int)num1 % (int)num2;
			}
			else {

				cout << "Not valide !";
			}

			break;

		default:
			cout << "Not valide opration !" << "\n";
			break;

	}
}


#include <iostream>

using namespace std;

int main()
{
    //user enters integer number 
    //program write out if that number i seven or odd

    int number;
    cout << "Please enter your number : ";
    cin >> number;

    if ((number % 2 ) == 0){

        cout << "You have entered even number" << "\n";
    }
    else {

        cout << "You have entered odd number";
    }
   
    system("pause>0");
}


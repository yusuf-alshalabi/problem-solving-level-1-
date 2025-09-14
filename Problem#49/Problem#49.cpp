
/*
Question(49):
Write  a program to read:
-ATM PIN code
Then check if PIN code = 1234,
then show balance to user

otherwise print "Wrong PIN" and ask
the user to enter the PIN again.

.'. Assume user Balance = 7500,
*/

#include <iostream>
#include <string>

using namespace std;
int balance = 7500;
int PINcode = 1234;

int readPositiveNumber() {
	int number;
	do {
		cout << "Enter the PIN code : ";
		cin >> number;
	} while (number < 0);
	return number;
}

bool checPINcode() {
	int number;
	do {
		number = readPositiveNumber();
		if (number != PINcode)
		{
			system("color 4f");
			cout << "\nWrong code\n" << endl;
		}
	} while (number != PINcode);
	return true;
}

void printBalance() {
	if (checPINcode()) {
		system("color 2f");
		cout << "\nYour balance is : \n" << balance << endl;
	}
}



int main()
{
	printBalance();

	return 0;
}


/*
Question(50):
Write  a program to read:
-ATM PIN code
Then check if PIN code = 1234,
then show balance to user

otherwise print "Wrong PIN" and ask
the user to enter the PIN again.

Only allow user to enter the PIN 3 times
If fails print "Card is locked!".

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

bool login() {
	int number = 0;
	int counter = 3;
	do {
		counter--;
		number = readPositiveNumber();
		if (number != PINcode)
		{
			cout << "\nWrong code, you have " << counter << " more tries.\n" << endl;
			system("color 4f");

		}
	} while (number != PINcode && counter >= 1);
	if (counter < 1)
		return false;
	return true;
}

void printBalance() {
	if (login()) {
		cout << "\nYour balance is : \n" << balance << endl;
		system("color 2f");
	}
	else {
		cout << "The card is locked!" << endl;
	}
}



int main()
{
	printBalance();

	return 0;
}
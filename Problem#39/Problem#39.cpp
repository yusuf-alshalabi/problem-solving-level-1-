
/*
Question(39):
Write a program to read :
-TotalBill
-CashPaid
And calculate the remainder to be paid back
*/

#include <iostream>
#include <string>

using namespace std;

float readPositiveNumber(string text) {
	float n;
	do {
		cout << text;
		cin >> n;
	} while (n < 0);

	return n;
}

float calculateRemainder(float cashPaid, float totalBill) {
	return (cashPaid - totalBill);
}

void printRemainder(float remainder) {
	cout << "The remainder is : " << remainder << endl;
}

int main()
{
	int cashPaid = readPositiveNumber("Enter the cash paid :");
	int totalBill = readPositiveNumber("Enter the total bill :");

	cout << "\n\nThe cash paid= " << cashPaid << endl;
	cout << "The Total bill= " << totalBill << endl;
	cout << "-----------------------------------------\n";
	printRemainder(calculateRemainder(cashPaid, totalBill));

	return 0;
}

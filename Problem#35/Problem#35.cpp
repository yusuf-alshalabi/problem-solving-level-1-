
/*
Question(35):
Write a program to ask the user to enter :
-Pennis
-Nickels
-Dimes
-Quarters
-Dallers

Then calculate the total pennis,total dollars
and print them on screen , given that :

-Penny=1
-Nickel=5
-Dime=10
-Quarter=25
-Dollar=100
*/


#include <iostream>
#include <string>

using namespace std;

struct srCurrency {
	int pennies, nickels, dimes, quarters, dollers;
};

srCurrency readCurrency() {
	srCurrency currency;
	cout << "Enter the number of pennies : ";
	cin >> currency.pennies;

	cout << "Enter the number of nickels : ";
	cin >> currency.nickels;

	cout << "Enter the number of dimes : ";
	cin >> currency.dimes;

	cout << "Enter the number of quarters : ";
	cin >> currency.quarters;

	cout << "Enter the number of dollers : ";
	cin >> currency.dollers;

	return currency;
}

int calculateTotalPennies(srCurrency currency) {
	return((currency.pennies * 1) + (5 * currency.nickels) + (10 * currency.dimes) + (25 * currency.quarters) + (100 * currency.dollers));
}

float calculateTotalDollers(srCurrency currency) {
	return(float)(calculateTotalPennies(currency) / 100.0);
}

void printTotalPennies(float pennies) {
	cout << "The total of pennies is : " << pennies << endl;
}/*>*/

void printTotalDollers(float dollers) {
	cout << "The total of dollers is : " << dollers << endl;
}

int main()
{
	srCurrency currency = readCurrency();
	printTotalPennies(calculateTotalPennies(currency));
	printTotalDollers(calculateTotalDollers(currency));

	return 0;
}

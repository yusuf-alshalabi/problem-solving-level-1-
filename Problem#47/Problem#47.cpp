
/*
Question(47):
Write  a program to read:
-LoanAmount
-MonthlyPayment
And calculate how many months
you need to settle the loan.
*/

#include <iostream>
#include <string>

using namespace std;

float readPositiveNumber(string s) {
	float number;
	do {
		cout << s << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float calculateNumberOfMonthToSettle(float loanAmount, float monthInstallment) {
	return (loanAmount / monthInstallment);
}

void printResult(float numberOfMonth) {
	cout << "total months to pay : " << numberOfMonth << endl;
}


int main()
{
	float loanAmount = readPositiveNumber("Enter the Loan Amount : ");
	float monthInstallment = readPositiveNumber("Enter the monthly installment : ");
	printResult(calculateNumberOfMonthToSettle(loanAmount, monthInstallment));


	return 0;
}

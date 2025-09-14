
/*
Question(48):
Write  a program to read:
-LoanAmount
-HowManyMonthsToSettleTheLoan
And calculate the monthly insallment amount.
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

float calculateMonthlyInstallmentAmount(float loanAmount, float numberOfMonths) {
	return (loanAmount / numberOfMonths);
}

void printResult(float monthlyAmount) {
	cout << "The monthly installment amount is : " << monthlyAmount << endl;
}


int main()
{
	float loanAmount = readPositiveNumber("Enter the Loan Amount : ");
	float numberOfMonths = readPositiveNumber("How many months You need to settle the loan : ");
	printResult(calculateMonthlyInstallmentAmount(loanAmount, numberOfMonths));


	return 0;
}

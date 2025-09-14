
/*
Question(40):
A restaurant charges 10% services fee and 16% sales tax
Write a program to read a Bill value and add service fee
and sales tax to it and print the totalBill on the screen.
*/

#include <iostream>
#include <string>

using namespace std;

float readBillValue() {
	int n;
	cout << "Enter the bill value :";
	cin >> n;
	return n;
}

float addServicesFee(float billValue) {
	return (billValue * 1.1);
}

float addSalesTax(float billValue) {
	return  (billValue * 1.16);
}

void printTotalBill(float totalBill) {
	cout << "The total bill after add the servives fee and sales tax is : " << totalBill << endl;
}


int main()
{
	float billValue = readBillValue();

	billValue = addServicesFee(billValue);
	billValue = addSalesTax(billValue);

	printTotalBill(billValue);

	return 0;
}

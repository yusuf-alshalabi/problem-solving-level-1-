
/*
Question(34):
Write a program to ask the user to enter :
-TotalSales

Then commision is calculated
as one percentage * the total sales amount ,
all you need is to decide which percentage to
use of the followig :

>1000k ----> percentage is 1%
500k to 1M ----> percentage is 2%
100k to 500k ----> percentage is 3%
50k  to 100k ----> percentage is 5%
Otherwise ----> percentage is 0%

*/


#include <iostream>
#include <string>

using namespace std;

float readTotalSales() {
	int n;
	do {
		cout << "Enter the Total Sales : ";
		cin >> n;
	} while (n < 0);

	return n;
}

float calculatePrecentage(float totalSales) {
	if (totalSales >= pow(10, 6))
		return 0.01;
	else if (totalSales >= 5 * pow(10, 5))
		return 0.02;
	else if (totalSales >= pow(10, 5))
		return 0.03;
	else if (totalSales >= 5 * pow(10, 4))
		return 0.05;
	else
		return 0.00;
}

float calculateCommission(float totalSales) {
	return (totalSales * calculatePrecentage(totalSales));
}

void printResult(float commission) {
	cout << "The commission is : " << commission << endl;
}

int main()
{
	printResult(calculateCommission(readTotalSales()));

	return 0;
}

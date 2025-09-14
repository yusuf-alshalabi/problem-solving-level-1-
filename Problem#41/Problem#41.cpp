
/*
Question(41):
Write a program to read number of hours and calculates
the numbers of weeks, and days included in that number.
*/


#include <iostream>
#include <string>

using namespace std;

int readNumberOfHours() {
	int n;
	do {
		cout << "Enter the number of hours :";
		cin >> n;
	} while (n < 0);

	return n;
}

float calculateNumberOfdays(float numberOfHours) {
	return (numberOfHours / 24.0);
}

float calculateNumberOfWeeks(float numberOfHours) {
	return (numberOfHours / (24.0 * 7.0));
}

void printResult(float numberOfHours) {
	cout << "The number of days included in this number of hours is : " << calculateNumberOfdays(numberOfHours) << endl;
	cout << "The number of weeks included in this number of hours is : " << calculateNumberOfWeeks(numberOfHours) << endl;
}

int main()
{
	printResult(readNumberOfHours());

	return 0;
}

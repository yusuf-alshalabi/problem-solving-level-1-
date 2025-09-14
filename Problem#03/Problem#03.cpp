
/*
Question(3):
Write a program to ask the user to enter
a number, then print"Odd" if its odd,
or "Even" if its even.
*/

#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int readNumber() {
	int number;
	cout << "Enter the number : ";
	cin >> number;
	return number;
}

enNumberType checkNumberType(int number) {
	int result = number % 2;
	if (result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void printNumberType(enNumberType numberType) {
	if (numberType == enNumberType::Even)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}
int main()
{
	printNumberType(checkNumberType(readNumber()));

	return 0;
}

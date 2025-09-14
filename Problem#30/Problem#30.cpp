
/*
Question(30):
Write a program to  calculate factorial of N
Note : user should only enter positive number
otherwise rejected it and ask to enter again .
*/


#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(string text) {
	int n;
	do {
		cout << text;
		cin >> n;
	} while (n < 0);

	return n;
}

unsigned long long fectorial(int number) {
	unsigned long long result = 1;
	for (int i = number; i > 1; i--) {
		result *= i;
	}
	return result;
}

void printFactorial(unsigned long long factorial) {
	cout << "The factorial of the number is " << factorial << endl;
}

int main() {
	printFactorial(fectorial(readPositiveNumber("Enter the positive number :")));

	return 0;
}

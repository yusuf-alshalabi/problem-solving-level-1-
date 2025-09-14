
/*
Question(31):
Write a program to ask the user to enter :
Number
Then print the Number^2 , Number^3 , Number^4.
*/

#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber() {
	int n;
	do {
		cout << "Enter the number : ";
		cin >> n;
	} while (n < 0);

	return n;
}


float calculatePowerOfNumber(float number, int power) {
	float result = 1.0;
	for (int i = 1; i <= power; i++) {
		result *= number;
	}

	return result;
}

void printPowerOfNumber(float number, int power) {

	cout << number << " ^ " << power << " = " << calculatePowerOfNumber(number, power) << endl;
}

int main()
{
	float number = readPositiveNumber();
	printPowerOfNumber(number, 2);
	printPowerOfNumber(number, 3);
	printPowerOfNumber(number, 4);


	return 0;
}

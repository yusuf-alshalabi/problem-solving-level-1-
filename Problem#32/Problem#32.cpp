
/*
Question(32):
Write a program to ask the user to enter :
-Number
-M
Then print the Number^M.
*/

#include <iostream>
#include <string>

using namespace std;

void readNumberAndPower(float& number, int& power) {
	do {
		cout << "Enter the number : ";
		cin >> number;
	} while (number < 0);

	do {
		cout << "Enter the power : ";
		cin >> power;
	} while (power < 0);
}

float calculatePowerOfNumber(float number, int power) {
	float result = 1.0;
	for (int i = 1; i <= power; i++) {
		result *= number;
	}

	return (float)result;
}

void printPowerOfNumber(float number, int power) {
	cout << number << " ^ " << power << " = " << calculatePowerOfNumber(number, power) << endl;
}

int main()
{
	float number;
	int power;
	readNumberAndPower(number, power);
	printPowerOfNumber(number, power);

	return 0;
}

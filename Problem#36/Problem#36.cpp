
/*
Question(36):
Write a program to ask the user to enter :
-Number1
-Number2
-Operation type

When perform the calculation according to the operation types as follows:
- "+" : add the two numbers
- "-" : subtract the two numbers
- "*" : multiply the two numbers
- "/" : devid the two numbers

*/


#include <iostream>
#include <string>

using namespace std;

enum enOperation { opMultiply = '*', opDivide = '/', opSum = '+', opSubtract = '-' };

struct stCalculation {
	float number1;
	float number2;
	enOperation operation;
};

float readNumber(string text) {
	float n;
	cout << text;
	cin >> n;
	return n;
}

stCalculation readCalculationInfo() {
	stCalculation calculation;

	char opChar;

	do {
		cout << "Enter the operation (+,-,*,/) : " << endl;
		cin >> opChar;
	} while (opChar != '+' && opChar != '-' && opChar != '*' && opChar != '/');
	calculation.operation = static_cast<enOperation>(opChar);

	calculation.number1 = readNumber("Enter the number(1) : ");
	calculation.number2 = readNumber("Enter the number(2) : ");

	return calculation;
}

float sum(float number1, float number2) {
	return number1 + number2;
}

float subtract(float number1, float number2) {
	return number1 - number2;
}

float multiply(float number1, float number2) {

	return number1 * number2;
}

float divide(float number1, float number2) {
	if (number2 == 0) {
		cout << "Error : Division by zero!" << endl;
		return 0;
	}
	return number1 / number2;
}

float calculationResult(stCalculation calculation) {
	switch (calculation.operation) {

	case enOperation::opSum:
		return sum(calculation.number1, calculation.number2);

	case enOperation::opSubtract:
		return subtract(calculation.number1, calculation.number2);

	case enOperation::opMultiply:
		return multiply(calculation.number1, calculation.number2);

	case enOperation::opDivide:
		return divide(calculation.number1, calculation.number2);

	default:
		cout << "Unknown operator!!" << endl;
		return 0.00f;

	}
}

void printResult(stCalculation calculation) {
	cout << calculation.number1 << " " << static_cast<char>(calculation.operation) << " " << calculation.number2 << " = " << calculationResult(calculation) << ".\n";
}

int main()
{
	printResult(readCalculationInfo());

	return 0;
}

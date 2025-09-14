
/*
Question(29):
Write a program to sum even numbers from 1 to N
Input : N
*/

#include <iostream>
#include <string>

using namespace std;

enum enOddOrEven { even = 1, odd = 2 };

int readNumber() {
	int n;
	cout << "Enter the number : ";
	cin >> n;
	return n;
}

enOddOrEven checkEvenOdd(int number) {
	if (number % 2 == 0)
		return enOddOrEven::even;
	else
		return enOddOrEven::odd;
}

int giveSumOddNumberFrom1toN(int number) {
	int result = 0;
	for (int i = 0; i <= number; i++) {
		if (checkEvenOdd(i) == enOddOrEven::even)
			result += i;
	}
	return result;
}

void printResult(int result) {
	cout << "The sum of the even number from 1 to your nunber is : " << result << endl;
}

int main()
{
	printResult(giveSumOddNumberFrom1toN(readNumber()));


	return 0;
}
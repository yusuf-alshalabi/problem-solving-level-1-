
/*
Question(38):
Write a program to read:
-Number
And check if it is a prime number or not

Note: prime number can only divide on
one and itself.
*/

#include <iostream>
#include <string>

using namespace std;

int readNumber() {
	int n;
	cout << "Enter the number :";
	cin >> n;
	return n;
}

bool isPrime(int number) {

	if (number < 2)
		return 0;
	int M = round(number / 2);
	for (int i = 2; i <= M; i++) {
		if ((number % i) == 0)
			return 0;
	}
	return 1;
}

void printResult(bool isPrime) {
	if (isPrime)
		cout << "it is prime." << endl;
	else
		cout << "it is'nt prime." << endl;

}

int main()
{
	printResult(isPrime(readNumber()));

	return 0;
}

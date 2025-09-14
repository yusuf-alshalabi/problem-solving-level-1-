
/*
Question(26):
Write a program to print numbers from 1 to N
Input : N
*/

#include <iostream>
#include <string>

using namespace std;

int readNumber() {
	int n;
	cout << "Enter the number : ";
	cin >> n;
	return n;
}

void print1toN(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}
}

int main()
{
	print1toN(readNumber());

	return 0;
}

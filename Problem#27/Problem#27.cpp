
/*
Question(27):
Write a program to print numbers from N to 1
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
	for (int i = n; i >= 1; i--) {
		cout << i << " ";
	}
}

int main()
{
	print1toN(readNumber());

	return 0;
}
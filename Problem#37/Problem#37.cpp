
/*
Question(37):
Write a program to read :
-Numbers
from user and sum them keep reading until the user
enters -99 then print the sum on screen.
*/

#include <iostream>
#include <string>

using namespace std;

int readNumber(string s) {
	int n;
	cout << s << endl;
	cin >> n;
	return n;
}

int sumUntil99() {
	int counter = 1, n = 0, result = 0;
	do {
		n = readNumber("Enter the number " + to_string(counter) + " : " + "(-99 for exit)");
		if (n == -99) {
			break;
		}
		result += n;
		counter++;
	} while (n != -99);
	return result;
}

void printResult(int result) {
	cout << "The result of sum numbers is : " << result << endl;
}

int main()
{
	printResult(sumUntil99());

	return 0;
}

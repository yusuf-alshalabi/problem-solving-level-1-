
/*
Question(7):
Write a program to ask the user to enter :
-Number

Then print "The half of the <number> is <????>".
*/

#include <iostream>
#include <string>

using namespace std;

float readNumber() {
	float number;
	cout << "Enter the number : ";
	cin >> number;
	return number;
}

float calculateHalfNumber(float number) {
	return (float)number / 2;
}

void printResult(float number) {
	string result = "The half of the number " + to_string(number) + " is : " + to_string(calculateHalfNumber(number));
	cout << endl << result << endl;

}

int main()
{
	printResult(readNumber());



	return 0;
}

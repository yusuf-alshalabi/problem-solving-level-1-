
/*
Question(19):
Write a program to calculate circle area through diameter,
then print it on the screen.
.'. area = 1/4 . pi . d^2
*/


#include <iostream>
#include <string>

using namespace std;

const float pi = 3.14159265359;

float readDiameter() {
	int diameter;
	cout << "Enter the diameter : " << endl;
	cin >> diameter;
	return diameter;
}

float calculateCircleArea(float diameter) {
	return (pi * pow(diameter, 2)) / 4;
}

void printResult(float area) {
	cout << "The area of circle is : " << area << endl;
}

int main()
{
	printResult(calculateCircleArea(readDiameter()));

	return 0;

}

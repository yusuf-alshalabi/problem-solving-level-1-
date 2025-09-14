
/*
Question(20):
Write a program to calculate circle area inscribed in a square,
then print it on the screen.
.'. area = 1/4 . pi . d^2
*/

#include <iostream>
#include <string>

using namespace std;

float readDiameter() {
	float diameter;
	cout << "Enter the length of side of the square  : " << endl;
	cin >> diameter;
	return diameter;
}

float calculateCircleArea(float diameter) {
	const float pi = 3.14;
	return (pi * pow(diameter, 2)) / 4;
}

void printResult(float area) {
	cout << "The area of the circle inscribed in a square is : " << area << endl;
}

int main()
{
	printResult(calculateCircleArea(readDiameter()));

	return 0;

}
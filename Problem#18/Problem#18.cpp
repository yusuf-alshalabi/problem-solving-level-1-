
/*
Question(18):
Write a program to calculate circle area
then print it on the screen.
.'. area = pi . r^2
*/


#include <iostream>
#include <string>

using namespace std;

const float pi = 3.14;

float readRadius() {
	int radius;
	cout << "Enter the radius : " << endl;
	cin >> radius;
	return radius;
}

float calculateCircleArea(float radius) {
	return pi * pow(radius, 2);
}

void printResult(float area) {
	cout << "The area of circle is : " << area << endl;
}

int main()
{
	printResult(calculateCircleArea(readRadius()));

	return 0;

}

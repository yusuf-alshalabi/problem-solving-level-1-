
/*
Question(21):
Write a program to calculate circle area a long the circumference,
then print it on the screen.
.'. area = l^2 /(4.pi)
*/

#include <iostream>
#include <string>

using namespace std;

float readCircumference() {
	float circumference;
	cout << "Enter the circumference : ";
	cin >> circumference;
	return circumference;
}

float calculateAreaByCircumference(int circumference) {
	const float pi = 3.14159265359;
	return pow(circumference, 2) / (4 * pi);
}

void printArea(int area) {
	cout << "The area of circle along the circumference is : " << area << endl;
}

int main()
{
	printArea(calculateAreaByCircumference(readCircumference()));


	return 0;
}

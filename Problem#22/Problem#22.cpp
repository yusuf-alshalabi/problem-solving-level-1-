
/*
Question(22):
Write a program to calculate circle area
inscribed in an isosceles triangle,
then print it on the screen.
.'. area =( pi. b^2 /4). ( (2.a-b) / (2.a+b) )
*/


#include <iostream>
#include <string>

using namespace std;

void readDimentionsOfIsoscelesTriangle(float& base, float& equal2Sides) {
	cout << "Enter the length of base : " << endl;
	cin >> base;
	cout << "Enter the length of equal two dimentions of triangle : ";
	cin >> equal2Sides;
}

float calculateAreaOfCircleInIsoscelesTriangle(float base, float equal2Sides) {
	const float pi = 3.14;
	float area = pi * (pow(base, 2) / 4) * ((2 * equal2Sides - base) / (2 * equal2Sides + base));
	return area;
}

void printAreaOfCircleInIsoscelesTriangle(float area) {
	cout << "The area of circle inscibed in an isosceles triangle is : " << area << endl;
}


int main()
{
	float base, equal2Sides;
	readDimentionsOfIsoscelesTriangle(base, equal2Sides);
	printAreaOfCircleInIsoscelesTriangle(calculateAreaOfCircleInIsoscelesTriangle(base, equal2Sides));


	return 0;
}

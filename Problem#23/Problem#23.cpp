
/*
Question(23):
Write a program to calculate circle area described
around on arbitrary triangle, then print it on the screen.
.'. area= pi. ( (a.b.c) / ( 4 . ( p . (p-a) . (p-b) . (p-c) )^(1/2) ) ) )^2
.'. p = (a+b+c) / 2
*/

#include <iostream>
#include <string>

using namespace std;


void readDimentionsOfArbitraryTriangle(float& sideA, float& sideB, float& sideC) {
	cout << "Enter the dimentions of arbitrary triangle of " << endl;
	cout << "Enter the length of side(A) : " << endl;
	cin >> sideA;
	cout << "Enter the length of side(B) : " << endl;
	cin >> sideB;
	cout << "Enter the length of side(C) : " << endl;
	cin >> sideC;
}

float calculateAreaOfCircleAroundArbitraryTriangle(float& sideA, float& sideB, float& sideC) {
	const float pi = 3.14;
	float p = (sideA + sideB + sideC) / 2;
	float area = pi * pow((sideA * sideB * sideC) / (4 * sqrt(p * (p - sideA) * (p - sideB) * (p - sideC))), 2);
	return area;
}

void printResult(float area) {
	cout << "\nThe area of circle describer around on arbitrary triangle is : " << area << endl;
}

int main()
{
	float sideA, sideB, sideC;
	readDimentionsOfArbitraryTriangle(sideA, sideB, sideC);
	printResult(calculateAreaOfCircleAroundArbitraryTriangle(sideA, sideB, sideC));

	return 0;
}

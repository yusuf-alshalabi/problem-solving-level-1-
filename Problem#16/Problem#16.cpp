
/*
Question(16):
Write a program to calculate rectangle area
through diagonal and side area of rectangle
and print it on the screen.
.'. area = a.(d^2 .a^2)^(1/2)
*/


#include <iostream>
#include <string>

using namespace std;

struct stdimentionsRectangle {
	float side;
	float diagonal;
};

stdimentionsRectangle readDimentionsRectangle() {
	stdimentionsRectangle dimentionsRectangle;

	cout << "Enter the diagonal of reactangle : " << endl;
	cin >> dimentionsRectangle.diagonal;

	cout << "Enter the side of reactangle : " << endl;
	cin >> dimentionsRectangle.side;

	return dimentionsRectangle;
}

float calculateAreaOfRectangle(stdimentionsRectangle dimentionsRectangle) {
	return dimentionsRectangle.side * sqrt(pow(dimentionsRectangle.diagonal, 2) - pow(dimentionsRectangle.side, 2));
}

void printAreaOfRectangle(float area) {
	cout << "The area is: " << area << endl;
}

int main()
{
	printAreaOfRectangle(calculateAreaOfRectangle(readDimentionsRectangle()));



	return 0;
}

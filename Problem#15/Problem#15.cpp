
/*
Question(15):
Write a program to calculate rectangle area
and print it on the screen.
.'. area = a . b
*/


#include <iostream>
#include <string>

using namespace std;

struct stdimentionsRectangle {
	float length;
	float high;
};

stdimentionsRectangle readDimentionsRectangle() {
	stdimentionsRectangle dimentionsRectangle;

	cout << "Enter the lingth of reactangle : " << endl;
	cin >> dimentionsRectangle.length;

	cout << "Enter the high of reactangle : " << endl;
	cin >> dimentionsRectangle.high;

	return dimentionsRectangle;
}

float calculateAreaOfRectangle(stdimentionsRectangle dimentionsRectangle) {
	return dimentionsRectangle.high * dimentionsRectangle.length;
}

void printAreaOfRectangle(float area) {
	cout << "The area is: " << area << endl;
}

int main()
{
	printAreaOfRectangle(calculateAreaOfRectangle(readDimentionsRectangle()));



	return 0;
}

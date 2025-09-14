
/*
Question(17):
Write a program to calculate triangle area
then print it on the screen.
.'. area = (1/2).a.h
*/

#include <iostream>
#include <string>

using namespace std;

void readNumbers(float& high, float& base) {
    cout << "Enter the high of triangle : " << endl;
    cin >> high;
    cout << "Enter the base of triangle : " << endl;
    cin >> base;
}

float calculateTriangleArea(int high, int base) {
    return 0.5 * high * base;
}

void printResult(int area) {
    cout << "The area of triangle is : " << area << endl;
}


int main()
{
    float high, base;
    readNumbers(high, base);
    printResult(calculateTriangleArea(high, base));


    return 0;

}
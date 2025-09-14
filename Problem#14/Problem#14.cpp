
/*
Question(14):
Write a program to ask the user to enter :
-Number1
-Number2

Then print the tow numbers,
then swap the tow numbers and print them.
*/

#include <iostream>
#include <string>

using namespace std;

void readTwoNumbers(int(&arrTwoNumbers)[2]) {
    cout << "Enter the number(1) : ";
    cin >> arrTwoNumbers[0];

    cout << "Enter the number(2) : ";
    cin >> arrTwoNumbers[1];
}

void printTwoNumbersOfArray(int(&arrTwoNumbers)[2]) {
    cout << "The number(1) is : " << arrTwoNumbers[0] << endl;
    cout << "The number(2) is : " << arrTwoNumbers[1] << endl;
}

void swap(int(&arrTwoNumbers)[2]) {
    int temp = arrTwoNumbers[0];
    arrTwoNumbers[0] = arrTwoNumbers[1];
    arrTwoNumbers[1] = temp;
}

int main()
{
    int arrTwoNumbers[2];
    readTwoNumbers(arrTwoNumbers);

    cout << "\nThe numbers befor swap : " << endl;
    printTwoNumbersOfArray(arrTwoNumbers);

    swap(arrTwoNumbers);

    cout << "\nThe numbers after swap : " << endl;
    printTwoNumbersOfArray(arrTwoNumbers);


    return 0;
}

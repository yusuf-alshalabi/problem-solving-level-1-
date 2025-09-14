
/*
Question(9):
Write a program to ask the user to enter :
-Number1
-Number2
-Number3

Then print the sum of entered numbers.
*/

#include <iostream>

using namespace std;

//------------------- The first method ----------------------

int numbers[3];

void readNumberss(int array[3]) {

    cout << "Enter the number(1) : ";
    cin >> array[0];

    cout << "Enter the number(2) : ";
    cin >> array[1];

    cout << "Enter the number(3) : ";
    cin >> array[2];

}

float sumNumberss(int array[3]) {
    return (array[0] + array[1] + array[2]);
}

void printSumNumberss(int numbers[3]) {
    cout << "The sum of numbers is : " << sumNumberss(numbers) << endl;
}

//------------------- The second method ----------------------

struct stNumbers {
    float number1;
    float number2;
    float number3;
};

stNumbers readNumbers() {
    stNumbers numbers;

    cout << "Enter the number(1) : ";
    cin >> numbers.number1;

    cout << "Enter the number(2) : ";
    cin >> numbers.number2;

    cout << "Enter the number(3) : ";
    cin >> numbers.number3;

    return numbers;
}

float sumNumbers(stNumbers numbers) {
    return (numbers.number1 + numbers.number2 + numbers.number3);
}

void printSumNumbers(stNumbers numbers) {
    cout << "The sum of numbers is : " << sumNumbers(numbers) << endl;
}

int main()
{
    /* int numbers[3];
     readNumberss(numbers);
     printSumNumbers(numbers);*/

    printSumNumbers(readNumbers());
    return 0;
}

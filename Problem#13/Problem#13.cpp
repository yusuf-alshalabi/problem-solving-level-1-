
/*
Question(13):
Write a program to ask the user to enter :
-Number1
-Number2
-Number3

Then print the max number.
*/


#include <iostream>
using namespace std;

void read3Numbers(int(&arr3Number)[3]) {
    cout << "Enter the number(1) : ";
    cin >> arr3Number[0];

    cout << "Enter the number(2) : ";
    cin >> arr3Number[1];

    cout << "Enter the number(3) : ";
    cin >> arr3Number[2];
}

int MaxOf3Numbers(int(&arr3Number)[3]) {
    if (arr3Number[0] > arr3Number[1] && arr3Number[0] > arr3Number[2])
        return arr3Number[0];
    else if (arr3Number[1] > arr3Number[2])
        return arr3Number[1];
    else
        return arr3Number[2];
}

void printMax3Numbers(int max) {
    cout << "The max number is : " << max << endl;
}

int main()
{
    int arr3Number[3];
    read3Numbers(arr3Number);
    printMax3Numbers(MaxOf3Numbers(arr3Number));

    return 0;
}

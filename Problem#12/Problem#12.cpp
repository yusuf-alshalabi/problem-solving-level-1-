
/*
Question(12):
Write a program to ask the user to enter :
-Number1
-Number2

Then print the max number.
*/

#include <iostream>

using namespace std;

void read2Numbers(int(&arr2Number)[2]) {
    cout << "Enter the number(1) : ";
    cin >> arr2Number[0];

    cout << "Enter the number(2) : ";
    cin >> arr2Number[1];
}

int maxOf2Numbers(int(&arr2Number)[2]) {
    if (arr2Number[0] > arr2Number[1])
        return arr2Number[0];
    else
        return arr2Number[1];
}

void printMaxOf2Numbers(int max) {
    cout << "The max number : " << max << endl;
}

int main()
{
    int arr2Numbers[2];
    read2Numbers(arr2Numbers);
    printMaxOf2Numbers(maxOf2Numbers(arr2Numbers));

    return 0;
}

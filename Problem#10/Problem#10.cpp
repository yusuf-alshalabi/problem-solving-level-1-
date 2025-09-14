
/*
Question(10):
Write a program to ask the user to enter :
-Mark1
-Mark2
-Mark3

Then print the average of entered marks.
*/

#include <iostream>

using namespace std;

struct stMarks {
    float mark1;
    float mark2;
    float mark3;
};

stMarks readMarks() {
    stMarks marks;

    cout << "Enter the mark(1) : ";
    cin >> marks.mark1;

    cout << "Enter the mark(2) : ";
    cin >> marks.mark2;

    cout << "Enter the mark(3) : ";
    cin >> marks.mark3;

    return marks;
}

float averageMarks(stMarks marks) {
    return (marks.mark1 + marks.mark2 + marks.mark3) / 3;
}


int main()
{
    cout << "The average of marks is : " << averageMarks(readMarks()) << endl;

    return 0;
}

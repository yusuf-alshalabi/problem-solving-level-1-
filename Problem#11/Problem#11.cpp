
/*
Question(11):
Write a program to ask the user to enter :
-Mark1
-Mark2
-Mark3

Then print the average of entered marks.
and print also "Pass" if average>=50
otherwise print "Fail".
*/

#include <iostream>

using namespace std;

enum enPassFail { pass = 1, fail = 2 };

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

enPassFail isPass(float averageMark) {
    if (averageMark >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}

void printResult(float averageMark) {
    cout << "The average of marks is : " << averageMark << endl;
    if (isPass(averageMark) == enPassFail::pass)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}


int main()
{
    printResult(averageMarks(readMarks()));

    return 0;
}
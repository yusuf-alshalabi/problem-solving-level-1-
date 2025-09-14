
/*
Question(8):
Write a program to ask the user to enter:
-Mark
Then print the "Pass" if mark>=50,
otherwise print "Fail".
*/


#include <iostream>
#include <string>

using namespace std;

enum enPassFail { pass = 1, fail = 2 };

int readMark() {
	int mark;
	cout << "Enter the mark : ";
	cin >> mark;
	return mark;
}

enPassFail checkMark(int mark) {
	if (mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void printResult(int mark) {
	if (checkMark(mark) == enPassFail::pass)
		cout << "Pass";
	else
		cout << "Fail";
}

int main()
{
	printResult(readMark());

	return 0;
}

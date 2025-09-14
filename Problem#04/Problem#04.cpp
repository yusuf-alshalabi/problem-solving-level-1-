
/*
Question(4):
Write a program to ask the user to enter his/her :
-Age
-Driver license

Then print "Hired" if his/her age is greater than 21
and he has a driver license, otherwise print "Rejected".
*/

#include <iostream>
#include <string>

using namespace std;

struct stInfo {
	int age;
	bool hasDreverLicense;
};

stInfo readInfo() {
	stInfo Info;

	cout << "Enter your age : ";
	cin >> Info.age;

	cout << "Are you have driver's Lecense ? (0 for No / 1 for Yes)";
	cin >> Info.hasDreverLicense;

	return Info;
}

bool isAccepted(stInfo Info) {
	return(Info.age > 21 && Info.hasDreverLicense);
}

void printResult(stInfo Info) {
	if (isAccepted(Info))
		cout << "Hired";
	else
		cout << "Rejected";
}

int main()
{
	printResult(readInfo());

	return 0;
}

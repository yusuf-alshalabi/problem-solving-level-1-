
/*
Question(5):
Write a program to ask the user to enter his/her :
-Age
-Driver license
-Has Recommendation

print "Hired" without condition if it has recommendation
otherwise print "Hired" just if his/her age is greater than 21
and he has a driver license, otherwise print "Rejected".
*/

#include <iostream>

using namespace std;

struct stInfo {
	int age;
	bool hasDreverLicense;
	bool hasRecommendation;
};

stInfo readInfo() {
	stInfo Info;

	cout << "Enter your age : ";
	cin >> Info.age;

	cout << "Are you have driver's Lecense ? (0 for No / 1 for Yes)";
	cin >> Info.hasDreverLicense;

	cout << "Are you have recommendation ? (0 for No / 1 for Yes)";
	cin >> Info.hasRecommendation;

	return Info;
}

bool isAccepted(stInfo Info) {
	if (Info.hasRecommendation)
		return true;
	else
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

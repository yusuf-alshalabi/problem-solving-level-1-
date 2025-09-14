
/*
Question(24):
Write a program to ask the user to enter :
-Age
If age is between 18 and 45 print "Valid Age"
otherwise print "Invalid Age".
*/

#include <iostream>
#include <string>

using namespace std;


int readAge() {
	int age;

	cout << "Enter the Age : " << endl;
	cin >> age;
	return age;
}

bool validateNumberRange(int number, int from, int to) {
	return(number >= from && number <= to);
}

void printResult(int age) {
	if (validateNumberRange(age, 18, 45))
		cout << age << " is a valid." << endl;
	else
		cout << age << " is an invalid." << endl;


}

int main()
{
	printResult(readAge());


	return 0;
}

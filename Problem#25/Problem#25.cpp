
/*
Question(25):
Write a program to ask the user to enter :
-Age
If age is between 18 and 45 print "Valid Age"
otherwise print "Invalid Age" and
re_ask user to enter avalid age.
*/

#include <iostream>
#include <string>

using namespace std;

bool validateNumberRange(int number, int from, int to) {
	return(number >= from && number <= to);
}

int readAge() {
	int age;

	cout << "Enter the Age (the age must be between 18 and 45) : " << endl;
	cin >> age;
	return age;
}

int readUntilAgeBetween() {
	int age = 0;
	do {
		age = readAge();
		if (!validateNumberRange(age, 18, 45))
			cout << "invalid age!!" << endl;
	} while (!validateNumberRange(age, 18, 45));
	return age;
}

void printResult(int age) {
	cout << "\nYour age is : " << age << endl;
}

int main()
{
	printResult(readUntilAgeBetween());
	return 0;
}


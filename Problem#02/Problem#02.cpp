
/*
Question(2):
Write a program to ask the user to enter
his/her name and print it on screen.
*/

#include <iostream>
#include <string>

using namespace std;

void printName(string name) {
	cout << "Your name is : " << name << endl;
}
string readName() {
	string name;
	cout << "Enter your name :";
	getline(cin, name);
	return name;
}
int main()
{
	printName(readName());

	return 0;
}

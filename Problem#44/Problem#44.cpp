
/*
Question(44):
Write a program to ask the user to enter :
-Day
Then print the day as follows:

-1 ----> print "Sunday".
-2 ----> print "Munday".
-3 ----> print "Tuesday".
-4 ----> print "Wednesday".
-5 ----> print "Thursday".
-6 ----> print "Friday".
-7 ----> print "Saturday".

- otherwise ----> print "Wrond day"
and ask the user to enter the day again.


*/

#include <iostream>
#include <string>

using namespace std;

enum enWeekDay { Sun = 1, Mon = 2, Tues = 3, Wednes = 4, Thurs = 5, Fri = 6, Satur = 7 };

int readNumberInRange(string s, int from, int to) {
	int n;
	do {
		cout << s;
		cin >> n;
		if (n < from || n>to)
			cout << "wrong number! Please enter a number between " << from << " and " << to << ".\n";
	} while (n < from || n > to);
	return n;
}

enWeekDay readNumberOfDay() {
	return (enWeekDay)readNumberInRange("Enter the number of day in week : ", 1, 7);
}

string getNameDay(enWeekDay weekDayName) {
	switch (weekDayName) {
	case enWeekDay::Sun:
		return "Sunday";
	case enWeekDay::Mon:
		return "Monday";
	case enWeekDay::Tues:
		return "Tuesday";
	case enWeekDay::Wednes:
		return "Wednesday";
	case enWeekDay::Thurs:
		return "Thursday";
	case enWeekDay::Fri:
		return "Friday";
	case enWeekDay::Satur:
		return "Saturday";
	default:
		return "Not a valid Day!!";

	}
}

void PrintResult(string weekDayName) {
	cout << "This day is : " << weekDayName << endl;
}
int main()
{

	PrintResult(getNameDay(readNumberOfDay()));

	return 0;
}

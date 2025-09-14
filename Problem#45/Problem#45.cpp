
/*
Question(45):
Write a program to ask the user to enter :
-Month
Then print the month as follows:

-1 ----> print "January".
-2 ----> print "February".
-3 ----> print "March".
-4 ----> print "April".
-5 ----> print "May".
-6 ----> print "June".
-7 ----> print "July".
-8 ----> print "August".
-9 ----> print "Septemper".
-10 ----> print "October".
-11 ----> print "November".
-12 ----> print "December".


- otherwise ----> print "Wrond month"
and ask the user to enter the month again.


*/

#include <iostream>
#include <string>

using namespace std;

enum enWeekDay { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

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

enWeekDay readNumberOfMonth() {
	return (enWeekDay)readNumberInRange("Enter the number of month  :", 1, 12);
}

string getNameMonth(enWeekDay monthYear) {
	switch (monthYear) {
	case enWeekDay::January:
		return "January";
	case enWeekDay::February:
		return "February";
	case enWeekDay::March:
		return "March";
	case enWeekDay::April:
		return "April";
	case enWeekDay::May:
		return "May";
	case enWeekDay::June:
		return "June";
	case enWeekDay::July:
		return "July";
	case enWeekDay::August:
		return "August";
	case enWeekDay::September:
		return "September";
	case enWeekDay::October:
		return "October";
	case enWeekDay::November:
		return "November";
	case enWeekDay::December:
		return "December";
	default:
		return "Not a valid month!";
	}
}

void PrintResult(string weekDayName) {
	cout << "This month is : " << weekDayName << endl;
}

int main()
{
	PrintResult(getNameMonth(readNumberOfMonth()));

	return 0;
}

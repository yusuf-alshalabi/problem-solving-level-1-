
/*
Question(43):
Write a program that inputs the number of seconds
and changes i to days , hours , minutes , and seconds.

--> days : hours : minutes : seconds
example:
--> 2    : 5     : 45      : 35

*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct strTaskDuration {
	int numberOfDays;
	int numberOfHours;
	int numberOfMinutes;
	int numberOfSeconds;
};

int readPositiveNumber(string s) {
	int n;
	do {
		cout << s;
		cin >> n;
	} while (n < 0);

	return n;
}

strTaskDuration secondsToTaskDuration(int totalSeconds) {
	strTaskDuration taskDuration;

	const int secondsPerDays = 60 * 60 * 24;
	const int secondsPerHours = 60 * 60;
	const int secondsPerMinutes = 60;

	int remainder = 0;

	taskDuration.numberOfDays = totalSeconds / secondsPerDays;
	remainder = totalSeconds % secondsPerDays;

	taskDuration.numberOfHours = remainder / secondsPerHours;
	remainder = remainder % secondsPerHours;

	taskDuration.numberOfMinutes = remainder / secondsPerMinutes;
	remainder = remainder % secondsPerMinutes;

	taskDuration.numberOfSeconds = remainder;

	return taskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
	cout << "\n";

	cout << setfill('0') << setw(2) << TaskDuration.numberOfDays << ":"
		<< setw(2) << TaskDuration.numberOfHours << ":"
		<< setw(2) << TaskDuration.numberOfMinutes << ":"
		<< setw(2) << TaskDuration.numberOfSeconds << "\n";
}

int main()
{
	int totalSeconds = readPositiveNumber("Enter the total seconds : ");
	PrintTaskDurationDetails(secondsToTaskDuration(totalSeconds));


	return 0;
}

/*
Question(42):
Write a program to calculate the task
duration in seconds and print it on screen.

--> Given the time duration of a task in the
number of days , hours, minutes , and seconds
*/

#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration {
	int days, hours, minutes, seconds;
};

int readPositiveNumber(string s) {
	int n;
	do {
		cout << s;
		cin >> n;
	} while (n < 0);

	return n;
}

strTaskDuration readTaskDuration() {
	strTaskDuration taskDuration;
	taskDuration.days = readPositiveNumber("Enter the number of days : ");
	taskDuration.hours = readPositiveNumber("Enter the number of hours : ");
	taskDuration.minutes = readPositiveNumber("Enter the number of minutes : ");
	taskDuration.seconds = readPositiveNumber("Enter the number of seconds : ");

	return taskDuration;
}


int taskDurationInSeconds(strTaskDuration taskDuration) {
	int taskDurationInSeconds =
		(taskDuration.days * 24 * 60 * 60) +
		(taskDuration.hours * 60 * 60) +
		(taskDuration.minutes * 60) +
		(taskDuration.seconds);

	return taskDurationInSeconds;
}

void printTaskDurationInSconds(strTaskDuration taskDuration) {
	cout << "\nThe task duration in seconds is = " << taskDurationInSeconds(taskDuration) << endl;
}

int main()
{
	printTaskDurationInSconds(readTaskDuration());


	return 0;
}

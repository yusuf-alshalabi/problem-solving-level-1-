
/*
Question(33):
Write a program to ask the user to enter :
-Grade
Then print the grade as follows
-90 --- 100 print A
-80 --- 89  print B
-70 --- 79  print C
-60 --- 69  print D
-50 --- 59  print E
-Otherwise  print F
*/

#include <iostream>
#include <string>

using namespace std;

int readGradeInRange() {
	int n;
	do {
		cout << "Enter th grade(between 0 and 100)";
		cin >> n;
	} while (n < 0 || n>100);

	return n;
}

char geCharactarOfGrade(int grade) {
	if (grade >= 90)
		return'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}

void printResult(int grade) {
	cout << "Your grade is : \'" << geCharactarOfGrade(grade) << "\'.\n";
}

int main()
{
	printResult(readGradeInRange());


	return 0;
}

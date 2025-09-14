
/*
Question(46):
Write aprogram to print all letters from A to Z.
*/

#include <iostream>
#include <string>

using namespace std;

void priantAtoZ() {
	for (char i = 65; i <= 90; i++) {
		cout << char(i) << " ";
	}
	cout << endl;
}

void priantaToz() {
	for (char i = 97; i <= 122; i++) {
		cout << char(i) << " ";
	}
	cout << endl;

}



int main()
{
	priantAtoZ();
	priantaToz();
	return 0;
}

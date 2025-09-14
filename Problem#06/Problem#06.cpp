

/*
* Question(6)
Write a program to ask the user to enter :
-First name
-Last name
Then print full name on screen
*/

#include <iostream>
#include<string>

using namespace std;

struct stInfo {
    string firstName;
    string lastName;
};

stInfo readInfo() {
    stInfo info;

    cout << "Enter the first name : ";
    cin >> info.firstName;

    cout << "Enter the last name : ";
    cin >> info.lastName;

    return info;
}

string getFullName(stInfo info, bool reversed = 0) {

    if (reversed)
        return(info.lastName + " " + info.firstName);
    else
        return(info.firstName + " " + info.lastName);
}

void printFullName(string fullName) {
    cout << "The full name is : " << fullName << endl;
}

int main()
{
    printFullName(getFullName(readInfo()));




    return 0;
}

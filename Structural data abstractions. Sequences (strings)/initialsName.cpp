#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, middleName, lastName;

	// cout << "Enter first name: ";
	// cin >> firstName;

	// cout << "Enter middle name: ";
	// cin >> middleName;

	// cout << "Enter last name: ";
	// cin >> lastName;

	cout << "Enter first name: ";
	getline(cin, firstName);

	cout << "Enter middle name: ";
	getline(cin, middleName);

	cout << "Enter last name: ";
	getline(cin, lastName);

	cout << firstName[0] << "." << middleName[0] << "." << lastName[0] << endl;

	return 0;
}

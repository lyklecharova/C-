#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int first, second;

	cout << "Enter first variable: ";
	cin >> first;

	cout << "Enter second variable: ";
	cin >> second;

	// Define pointers
	int *prtFirst = &first;

	int *prtSecond1 = &second;
	int *prtSecond2 = &second;
	int *prtSecond3 = &second;

	// Assign pointer values
	prtSecond3 = prtFirst;
	int *prtSecond4 = &first;

	cout << "First value: " << *prtFirst << endl;
	cout << "Second1 value: " << *prtSecond1 << endl;
	cout << "Second2 value: " << *prtSecond2 << endl;
	cout << "Second3 value: " << *prtSecond3 << endl;
	cout << "Second4 value: " << *prtSecond4 << endl;

	return 0;
}
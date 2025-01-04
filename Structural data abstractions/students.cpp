#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cout << "Enter number of students: ";
	cin >> n;

	double grades[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter average grade for student " << i + 1 << ": ";
		cin >> grades[i];
	}

	bool hasWeakStudent = false;

	for (int i = 0; i < n; i++)
	{
		if (grades[i] < 3.00)
		{
			hasWeakStudent = true;
			break;
		}
	}

	if (hasWeakStudent)
	{
		cout << "There is a student with a low grade in the course." << endl;
	}
	else
	{
		cout << "There is no student with a low grade in the course." << endl;
	}
	return 0;
}
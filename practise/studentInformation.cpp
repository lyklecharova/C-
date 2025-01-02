#include <iostream>
#include <iomanip> // For fixed and setprecision
#include <string>
using namespace std;

int main()
{
	string studentName;
	int age;
	float averageGrade;

	cin >> studentName;
	cin >> age;
	cin >> averageGrade;

	cout << "Name: " << studentName
		 << ", Age: " << age
		 << ", Grade: " << fixed << setprecision(2) << averageGrade << endl;

	return 0;
}

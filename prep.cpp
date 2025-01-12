#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip> // For controlling output formatting

using namespace std;

struct Student
{
	int facultyNumber;
	string name;
	float averageGrade;
};

void inputStudentData(Student students[], int &numStudents, float &sumGrades)
{
	while (numStudents < 15)
	{
		cout << "Student " << numStudents + 1 << endl;

		cout << "Faculty Number: ";
		cin >> students[numStudents].facultyNumber;

		cout << "Name: ";
		cin >> students[numStudents].name;

		cout << "AverageGrade: ";
		cin >> students[numStudents].averageGrade;

		sumGrades += students[numStudents].averageGrade;
		numStudents++;
	}
}

void printStudents(const Student students[], int numStudents)
{
	cout << "\nList of students:" << endl;
	cout << left << setw(15) << "Faculty number"
		 << setw(15) << "Name"
		 << "Average Grade" << endl;

	for (int i = 0; i < numStudents; i++)
	{
		cout << setw(15) << students[i].facultyNumber
			 << setw(15) << students[i].name
			 << fixed << setprecision(2) << students[i].averageGrade << endl;
	}
}

float calculateGroupAverage(float sumGrades, int numStudents)
{
	return sumGrades / numStudents;
}

void sortStudentByGrade(Student students[], int numStudents)
{
	for (int i = 0; i < numStudents - 1; i++)
	{
		for (int j = i + 1; j < numStudents; j++)
		{
			if (students[i].averageGrade < students[j].averageGrade)
			{
				Student temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
}

int main()
{
	const int MAX_STUDENTS = 15;
	Student students[MAX_STUDENTS];

	int numStudents = 0;
	float sumGrades = 0;

	cout << "Enter data of students: " << endl;
	inputStudentData(students, numStudents, sumGrades);

	printStudents(students, numStudents);

	float groupAverage = calculateGroupAverage(sumGrades, numStudents);
	cout << "\nAverage grade of group: " << fixed << setprecision(2) << groupAverage << endl;

	sortStudentByGrade(students, numStudents);

	cout << "\nList of students: " << endl;
	printStudents(students, numStudents);

	return 0;
}
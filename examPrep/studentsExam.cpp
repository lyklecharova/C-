#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Student
{
	char name[50];
	int facultyNumber, grade;
};

void inputStudents(Student students[], int &count)
{
	do
	{
		cout << "\nEnter the number of students (max 40): ";
		cin >> count;
	} while (count < 1 || count > 40);

	for (int i = 0; i < count; ++i)
	{
		cout << "\nEnter details for student " << i + 1 << ":\n";

		cout << "Name: ";
		cin >> students[i].name;

		cout << "Faculty Number: ";
		cin >> students[i].facultyNumber;

		do
		{
			cout << "Grade (2-6): ";
			cin >> students[i].grade;
		} while (students[i].grade < 2 || students[i].grade > 6);
	}
}

void printStudents(Student students[], int count)
{
	cout << "\nList of students:\n";
	for (int i = 0; i < count; ++i)
	{
		cout << "Name: " << students[i].name
			 << ", Faculty Number: " << students[i].facultyNumber
			 << ", Grade: " << students[i].grade << '\n';
	}
}

void calculateAverage(Student students[], int count)
{
	double sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += students[i].grade;
	}
	double average = sum / count;
	cout << "\nAverage grade: " << average << '\n';
}

void countGrades(Student students[], int count)
{
	int excellentCount = 0, poorCount = 0;
	for (int i = 0; i < count; ++i)
	{
		if (students[i].grade == 6)
		{
			++excellentCount;
		}
		else if (students[i].grade == 2)
		{
			++poorCount;
		}
	}
	cout << "\nNumber of excellent grades (6): " << excellentCount << '\n';
	cout << "Number of poor grades (2): " << poorCount << '\n';
}

void sortStudentsByGrade(Student students[], int count)
{
	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (students[i].grade < students[j].grade)
			{
				Student temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}

	cout << "\nStudents sorted by grade (descending):\n";
	printStudents(students, count);
}

int main()
{
	Student students[40];
	int count;

	inputStudents(students, count);
	printStudents(students, count);
	calculateAverage(students, count);
	countGrades(students, count);
	sortStudentsByGrade(students, count);

	return 0;
}

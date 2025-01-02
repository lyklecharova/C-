#include <iostream>
#include <cstdlib>
using namespace std;

struct student
{
	string name;
	double gpa;
	bool enrolled = true;
};
int main()
{
	/*
		struct = A structure that group related variables under one name
		structs can contain many different data types (string, int, float, double, bool)
		variables in a struct are known as "members"
		members cam be access with . "Class Member Access Operator"

	*/
	student student1;
	student1.name = "Spongebob";
	student1.gpa = 3.2;

	cout << student1.name << endl;
	cout << student1.gpa << endl;
	cout << student1.enrolled << endl;

	student student2;
	student2.name = "Patrick";
	student2.gpa = 2.1;

	cout << student2.name << endl;
	cout << student2.gpa << endl;
	cout << student2.enrolled << endl;

	student student3;
	student3.name = "Squidward";
	student3.gpa = 1.5;

	cout << student3.name << endl;
	cout << student3.gpa << endl;
	cout << student3.enrolled << endl;

	return 0;
}
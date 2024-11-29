#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    double grades[100]; // Assumed maximum of 100 students
    bool hasWeakGrade = false;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the average grade of student " << i + 1 << ": ";
        cin >> grades[i];

        if (grades[i] < 3.0)
        { // Check for weak grade
            hasWeakGrade = true;
        }
    }

    if (hasWeakGrade)
    {
        cout << "There is a student with a weak grade.\n";
    }
    else
    {
        cout << "There are no students with a weak grade.\n";
    }

    return 0;

    system("PAUSE");
    return EXIT_SUCCESS;
}

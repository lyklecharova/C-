#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade == 2)
    {
        cout << "Fail";
    }
    else if (grade == 3)
    {
        cout << "Satisfactory";
    }
    else if (grade == 4)
    {
        cout << "Good";
    }
    else if (grade == 5)
    {
        cout << "Very good";
    }
    else if (grade == 6)
    {
        cout << "Excellent";
    }
    else
    {
        cout << "Non valid grade!";
    }

    cout << endl;
    system("pause");
    return EXIT_SUCCESS;
}

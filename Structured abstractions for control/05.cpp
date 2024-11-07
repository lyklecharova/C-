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

    switch (grade)
    {
    case 2:
        cout << "Fail";
        break;
    case 3:
        cout << "Satisfactory";
        break;
    case 4:
        cout << "Good";
        break;
    case 5:
        cout << "Very good";
        break;
    case 6:
        cout << "Excellent";
        break;
    default:
        cout << "Non valid grade!";
    }
    system("pause");
    return EXIT_SUCCESS;
}
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x, y;
    int number;

    cout << "Enter a real number x: ";
    cin >> x;
    cout << "Choose an expression: " << endl;

    cout << "1: y = x - 5" << endl;
    cout << "2: y = sin(x)" << endl;
    cout << "3: y = cos(x)" << endl;
    cout << "4:  y = exp(x)" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> number;

    switch (number)
    {
    case 1:
        y = x - 5;
        break;
    case 2:
        y = sin(x);
        break;
    case 3:
        y = cos(x);
        break;
    case 4:
        y = exp(x);
        break;
    default:
        cout << "Invalid number." << endl;
        return 1;
    }
    cout << "The value of y is: " << y << endl;
    return 0;

    system("pause");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a >= 10 && a <= 99)
    {
        cout << "The number is two-digit." << endl;
    }
    else
    {
        cout << "The number is not two-digit." << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}

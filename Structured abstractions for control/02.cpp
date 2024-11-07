#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cout << "a=";
    cin >> a;

    if (a % 3 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}

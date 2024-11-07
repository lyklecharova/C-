#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;
    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    cout << "c";
    cin >> c;

    if (a * a == b * b + c * c ||
        b * b == a * a + c * c ||
        c * c == a * a + b * b)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;

    system("pause");
    return EXIT_SUCCESS;
}

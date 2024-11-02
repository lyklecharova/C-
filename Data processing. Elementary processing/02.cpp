#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";

    cin >> b;
    double c = a;

    a = b;
    b = c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return EXIT_SUCCESS;
}

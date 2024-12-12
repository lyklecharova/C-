#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int *p = new int;
    *p = 10;
    cout << *p << endl;

    int n = 15;
    p = &n;
    *p += 3;
    cout << "n = " << n << endl;
    cout << "*p = " << *p << endl;

    delete p;

    system("pause");
    return EXIT_SUCCESS;
}

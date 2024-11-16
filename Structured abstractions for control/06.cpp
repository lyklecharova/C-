#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    // do - за валидация на входните данни
    do
    {
        cout << "n=";
        cin >> n;
    } while (n < 1);

    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        cout << n << "!= " << f << endl;
    }

    int i = 1;
    f = 1;
    do
    {
        f *= i;
        i++;
    } while (i <= n);
    {
        cout << n << "!= " << f << endl;
    }

    i = 1;
    f = 1;
    while (i <= n)
        ;
    {
        f *= i;
        i++;
    }
    cout << n << "!= " << f << endl;

    system("pause");
    return EXIT_SUCCESS;
}

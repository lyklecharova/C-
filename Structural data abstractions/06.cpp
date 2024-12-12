#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    do
    {
        cout << "n= ";
        cin >> n;
    } while (n < 1 || n > 100);
    double a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

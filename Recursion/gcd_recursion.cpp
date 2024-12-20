#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;
    cout << "Enter two whole  numbers: " << endl;
    cin >> a >> b;

    if (a > 0 && b > 0)
    {
        cout << "The greatest common divisor of: " << a << " and "
             << b << " is: " << gcd(a, b) << endl;
    }
    else
    {
        cout << "Please enter only whole numbers!" << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}
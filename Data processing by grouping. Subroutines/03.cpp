#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int sum(int a, int b = 0)
{
    int s = a + b;
    return s;
}

int nod(int a, int b)
{

    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    int s = sum(n, m);
    cout << n << "+" << m << "= " << s << endl;

    cout << "NOD( " << n << " , " << m << ") = " << nod(n, m) << endl;
    system("pause");
    return EXIT_SUCCESS;
}

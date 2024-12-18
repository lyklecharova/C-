#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int factoriel(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factoriel(n - 1);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n, m;
    cin >> n;
    cin >> m;
    cout << "3!=" << factoriel(3) << endl;

    system("pause");
    return EXIT_SUCCESS;
}

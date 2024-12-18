#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

void swap(int &a, int &b) // & - псевдоним
{
    int c = a;
    a = b;
    b = c;
}

void swap(int *a, int *b)
{ // * - указател
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cin >> n;
    cin >> m;
    
    swap(n, m);
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;

    swap(&n, &m);
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;

    system("pause");
    return EXIT_SUCCESS;
}

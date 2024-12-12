#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Insert value: ";
        cin >> a[i];
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != (n - 1))
            cout << " ";
        else
            cout << endl;
    }
}

int lSearch(int a[], int n, int x)
{
    int i = 0;
    while (i < n && a[i] != x)
        i++;
    if (i < n)
        return i;
    else
        return -1;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int b[3];
    read(b, 3);
    print(b, 3);
    int l = lSearch(b, 3, 8);
    if (l != -1)
        cout << "The arr contains 8" << endl;
    system("pause");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s = s + a[i];
    return s;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int b[3];
    cout << "Sum = " << sum(b, 3) << endl;
    system("pause");
    return EXIT_SUCCESS;
}

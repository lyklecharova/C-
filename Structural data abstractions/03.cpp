#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "a[ " << i << " ]=";
        cin >> a[i];
    }
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            j++;
        }
        cout << "Positive numbers: " << j << endl;
    }

    return 0;
}

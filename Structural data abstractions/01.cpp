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

    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
        if (i != 4)
            cout << ", ";
        else
            cout << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}

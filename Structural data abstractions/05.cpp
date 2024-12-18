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

    int max = a[0];
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            k = i;
        }
    }

    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == max)
        {
            c++;
        }
        cout << "The arr contains: " << max << c << " times" << endl;
    }

    cout << "Max= " << max << endl;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == max)
        {
            cout << i << endl;
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

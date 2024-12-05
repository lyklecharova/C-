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

    cout << "Max= " << max << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

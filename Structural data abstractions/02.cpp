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

    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum = sum + a[i];
    cout << "Sum = " << sum << endl;
    cout << "Avg="<<(double) sum/5<< endl;

    system("pause");
    return EXIT_SUCCESS;
}

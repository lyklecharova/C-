#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int m, n;
    int sum = 0;

    cout << "Enter m: ";
    cin >> m;

    cout << "Enter n: ";
    cin >> n;

    for (int i = m; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "Sum of even numbers: " << sum << endl;

    system("pause");
    return EXIT_SUCCESS;
}

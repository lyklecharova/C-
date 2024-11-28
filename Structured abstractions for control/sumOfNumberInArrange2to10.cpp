#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sum = 0;
    for (int i = 2; i <= 10; i++)
    {
        sum += i;
        cout << "Sum :" << sum << endl;
        if (i % 2 != 0)
        {
            cout << i << " odd sum: " << endl;
            sum += i;
        }
    }

    return 0;
    system("pause");
    return EXIT_SUCCESS;
}

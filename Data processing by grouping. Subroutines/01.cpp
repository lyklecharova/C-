#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int sum(int a, int b = 0)
{
    int s = a + b;
    return s;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << 2 << "+" << 3 << "=" << sum(2, 3) << endl;
    cout << "3+0 = " << sum(3) << endl;

    system("pause");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int fib(int n)
{
    if (n == 1)
        return 0;
    else
        if (n == 2) return 1;
    else return fib(n - 2) + fib(n - 1);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cin >> n;

    cout<<fib(4)<<endl;
    system("pause");
    return EXIT_SUCCESS;
}

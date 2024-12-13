#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

bool isCheckEquation(int x, int y)
{
    return (5 * x + 2 * y == 7);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, y;
    cout << "Enter two integers (x and y): ";
    cin >> x >> y;

    if (isCheckEquation(x, y))
    {
        cout << "The numbers satisfy the equation 5x+2y=7" << endl;
    }
    else
    {
        cout << "The numbers do not  satisfy the equation 5x+2y=7" << endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}

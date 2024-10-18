#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // declaring variables
    int a, b;
    int result;

    // process;
    a = 5;
    b = 2;
    result = a - b;

    // print out the result
    cout << result << endl;

    system("pause");

    // terminate the program
    return 0;
}
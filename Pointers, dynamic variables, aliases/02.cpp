#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int *b = new int[5];
    for (int i = 0; i < 5; i++)
        *(b + i) = i;
    for (int i = 0; i < 5; i++)
        cout << *(b + i) << endl;
    delete[] b;

    system("pause");
    return EXIT_SUCCESS;
}

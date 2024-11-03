#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cout << "a=";
    cin >> a;

    int h = a / 1000;     // Хиляди
    int s = a / 100 % 10; // Стотици
    int d = a / 10 % 10;  // Десетки
    int e = a % 10;       // Единици

    cout << h << endl;
    cout << s << endl;
    cout << d << endl;
    cout << e << endl;

    system("pause");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <windows.h> // Необходимо е за SetConsoleOutputCP и SetConsoleCP
using namespace std;

int main()
{
    // Настройка на конзолата на UTF-8 за коректно показване на текст
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int v, t;
    double s;

    cout << "Въведете скорост: ";
    cin >> v;
    cout << "Въведете време: ";
    cin >> t;

    s = v * t;
    cout << "За " << t << " часа колата ще измине " << s << " км.\n";

    system("pause");
    return EXIT_SUCCESS;
}
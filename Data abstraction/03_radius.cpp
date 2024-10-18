#include <cstdlib>
#include <iostream>
#include <windows.h> // Необходимо е за SetConsoleOutputCP и SetConsoleCP
using namespace std;

int main()
{
    // Настройка на конзолата на UTF-8 за коректно показване на текст
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double PI = 3.1415;

    double r;
    cin >> r;
    double p = 2 * PI * r;
    double s = PI * r * r;

    
    cout << "p = " << p << "\n";
    cout << "s = " << s << "\n";

    system("pause");
    return EXIT_SUCCESS;
}
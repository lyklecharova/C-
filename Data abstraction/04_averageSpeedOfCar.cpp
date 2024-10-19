#include <cstdlib>
#include <iostream>
#include <windows.h> // Необходимо е за SetConsoleOutputCP и SetConsoleCP
using namespace std;

int main()
{
    // Настройка на конзолата на UTF-8 за коректно показване на текст
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double n;            // n - kilometers ,
    double v;            // v - average speed
    const double t = 10; // t - time in minutesS

    cout << "Въведете разстояние n (в км): ";
    cin >> n;

    v = (n / t) * 60;
    cout << "Средната скорост е: " << v << " км/ч" << endl;

    system("pause");
    return EXIT_SUCCESS;
}
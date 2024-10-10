#include <cstdlib>
#include <iostream>
#include <windows.h> // Необходимо е за SetConsoleOutputCP и SetConsoleCP
using namespace std;

int main(int args, char *argv[])
{
    // Задаваме кодирането на конзолата на UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // cout << "Infomation" << endl;
    // cout << "And" << endl;
    // cout << "Computer" << endl;
    // cout << "Engineering" << endl;
    // cout << 2024 << "-" << 2024 + 1 << endl;

    int a;
    cout << "Въведете цяло число: " << endl;
    // cin - console input
    cin >> a;
    cout << "a = " << a << endl;
    cout << "a + 2 = " << a + 2 << endl;

    int b;
    cout << "Въведете цяло число: " << endl;
    cin >> b;
    cout << "a * b = " << a * b << endl;
    cout << "b * 4 = " << b * 4 << endl;

    system("pause");

    return 0;
}

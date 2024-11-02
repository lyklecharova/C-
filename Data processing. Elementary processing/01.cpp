#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, b, c;
    cout << "Enter the length, width, and height of the parallelepiped: ";
    cin >> a >> b >> c;

    double volume = a * b * c;
    double surfaceArea = 2 * (a * b + a * c + b * c);

    cout << "Volume: " << volume << endl;
    cout << "Total surface area: " << surfaceArea << endl;

    system("pause");
    return EXIT_SUCCESS;
}

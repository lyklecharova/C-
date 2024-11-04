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

    double ax = 2, ay = 3, bx = 5, by = 2.5, cx = 1, cy = -1;
    double a = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double b = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
    double c = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));

    cout << setiosflags(ios::fixed) << setprecision(2) << a << endl;
    cout << b << endl;
    cout << c << endl;

    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "s ="<<setfill('*')<<setw(10)<<s<<endl;
    system("pause");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cout << "Enter a four-digit number: ";
    cin >> a;

    // Check if the number is four digits
    if (a < 1000 || a > 9999)
    {
        cout << "Please enter a valid four-digit number." << endl;
        return 1; // Exit with an error
    }

    // Extracting the digits of the number
    int d1 = a / 1000;
    int d2 = (a / 100) % 10;
    int d3 = (a / 10) % 10;
    int d4 = a % 10;

    // // Checking for uniqueness among all digits
    // if (d1 != d2 && d1 != d3 && d1 != d4 &&
    //     d2 != d3 && d2 != d4 && d3 != d4)
    // {
    //     cout << "1" << endl; // All digits are different
    // }
    // else
    // {
    //     cout << "0" << endl; // There are duplicate digits
    // }

    // return 0;

    cout << ((d1 != d2 && d1 != d3 && d1 != d4 &&
              d2 != d3 && d2 != d4 && d3 != d4)
                 ? 1
                 : 0)
         << endl;

    system("pause");
    return EXIT_SUCCESS;
}
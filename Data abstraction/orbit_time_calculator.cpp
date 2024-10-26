#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip> // for std::setprecision

using namespace std;

const double PI = 3.14159265359; // Use a more precise value for PI
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int orbitHeight = 280;  // km
    int earthRadius = 6340; // km

    double totalOrbitRadius = earthRadius + orbitHeight;
    double orbitCircumference = 2 * PI * totalOrbitRadius;

    double averageSpeed; // km/h
    cout << "Enter the average speed of the spaceship (km/h): ";
    cin >> averageSpeed;

    double orbitTime = orbitCircumference / averageSpeed; // hours
    cout << fixed << setprecision(2);                     // Display 2 decimal places
    cout << "The time required for one orbit around the Earth is: "
         << orbitTime << " hours." << endl;

    system("pause");
    return EXIT_SUCCESS;
}
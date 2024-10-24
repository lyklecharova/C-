#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double sideLength, volume, surfaceArea;

    cout << "Enter the side length of the cube: ";
    cin >> sideLength;

    // Formula for the volume of a cube
    // volume = sideLength * sideLength * sideLength;
    volume = pow(sideLength, 3);

    // Formula for the surface area of ​​a cube
    // surfaceArea = 6 * sideLength * sideLength;
    surfaceArea = 6 * pow(sideLength, 2);

    cout << "The volume of the cube is: " << volume << endl;
    cout << "The total surface area of ​​the cube is: " << surfaceArea << endl;

    system("pause");
    return EXIT_SUCCESS;
}
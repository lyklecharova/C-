#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the area of a triangle using the Shoelace formula
double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Coordinates of the three vertices of the triangle
    double x1 = -2, y1 = 2.5;
    double x2 = 5, y2 = 2.5;
    double x3 = 1, y3 = -1.5;

    // Calculate the lengths of the sides of the triangle
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    // Calculate the area of the triangle
    double area = triangleArea(x1, y1, x2, y2, x3, y3);

    // Calculate the semi-perimeter
    double s = (a + b + c) / 2;

    // Calculate the radius of the circumcircle
    double R = (a * b * c) / (4 * area);

    // Calculate the radius of the incircle
    double r = area / s;

    // Output the results
    cout << "Circumcircle radius (R): " << R << endl;
    cout << "Incircle radius (r): " << r << endl;

    return 0;

    system("pause");
    return EXIT_SUCCESS;
}
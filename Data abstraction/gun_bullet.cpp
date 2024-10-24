#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

// Using CONST
const double MUZZLE_SPEED = 400; // m/s
const double BARREL = 0.8;       // m
const double MASS_GRAMS = 5.0;

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  double massOfTheBullet = MASS_GRAMS / 1000; // Convert to kg

  // a = v^2 / (2 * s)
  // double acceleration = (MUZZLE_SPEED * MUZZLE_SPEED) / (2 * BARREL);
  double acceleration = pow(MUZZLE_SPEED, 2) / (2 * BARREL);

  // F = m * a
  double force = massOfTheBullet * acceleration;
  cout << "The force acting on the bullet: " << force << " N" << endl;
  system("pause");
  return EXIT_SUCCESS;
}
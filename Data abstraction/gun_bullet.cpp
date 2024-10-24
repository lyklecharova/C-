#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  double muzzleSpeed = 400;            // m/s
  double barrel = 0.8;                 // m
  double massOfTheBullet = 5.0 / 1000; // Convert to kg

  // a = v^2 / (2 * s)
  // double acceleration = (muzzleSpeed * muzzleSpeed) / (2 * barrel);
  double acceleration = pow(muzzleSpeed, 2) / (2 * barrel);

  // F = m * a
  double force = massOfTheBullet * acceleration;
  cout << "The force acting on the bullet: " << force << " N" << endl;
  system("pause");
  return EXIT_SUCCESS;
}
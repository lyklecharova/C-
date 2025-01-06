#include <iostream>
#include <cstdlib>
using namespace std;

double raiseToPower(double baseNumber, int power)
{
	if(power == 0)
	{
		return 1;
	}
	
	if(power > 0)
	{
		return baseNumber * raiseToPower(baseNumber, power - 1);
	}
	return 1 / raiseToPower(baseNumber, -power);
}

int main()
{
	double baseNumber;
	int power;

	cout << "Enter base: ";
	cin >> baseNumber;
	cout << "Enter exponent: ";
	cin >> power;

	cout << baseNumber
		 << " raised to the power of "
		 << power << " is "
		 << raiseToPower(baseNumber, power)
		 << endl;

	return 0;
}
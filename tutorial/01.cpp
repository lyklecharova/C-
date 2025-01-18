#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	long l;
	char ch;
	float f;
	double d;

	cin >> i >> l >> ch >> f >> d;

	cout << i << endl;
	cout << l << endl;
	cout << ch << endl;

	cout << fixed << setprecision(3) << f << endl;
	cout << fixed << setprecision(9) << f << endl;

	return 0;
}
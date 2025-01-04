#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int ARR = 5;
	int a[ARR], b[ARR], c[ARR], result[ARR];

	cout << "Enter 5 elements for array A: " << endl;

	for (int i = 0; i < ARR; i++)
	{
		cout << "a[ " << i << "] = ";
		cin >> a[i];
	}

	cout << "Enter 5 elements for array B: " << endl;

	for (int i = 0; i < ARR; i++)
	{
		cout << "b[ " << i << "] = ";
		cin >> b[i];
	}

	cout << "Enter 5 elements for array C: " << endl;

	for (int i = 0; i < ARR; i++)
	{
		cout << "c[ " << i << "] = ";
		cin >> c[i];
	}

	cout << "The resulting array with elements a*b%c: " << endl;

	for (int i = 0; i < ARR; i++)
	{
		result[i] = (a[i] * b[i]) % c[i];
		cout << "result [" << i << "] = " << result[i] << endl;
	}
	return 0;
}
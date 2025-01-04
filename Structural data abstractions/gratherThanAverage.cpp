#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int ARR = 8;
	double numbers[ARR];

	cout << "Enter 8 real numbers:" << endl; 
	
	for (int i = 0; i < ARR; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	double sum = 0;
	for (int i = 0; i < ARR; i++)
	{
		sum += numbers[i];
	}

	double averageSum = sum / ARR;

	cout << "Indices of elements greater than the average (" << averageSum << "):" << endl;

	for (int i = 0; i < ARR; i++)
	{
		if (numbers[i] > averageSum)
		{
			cout << "Index " << i << ": " << numbers[i] << endl;
		}
	}

	return 0;
}
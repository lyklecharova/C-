#include <cstdlib>
#include <iostream>
using namespace std;

void inputArr(int arr[], int size)
{
	cout << "Enter elements of array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Element ]" << i + 1 << " ]: ";
		cin >> arr[i];
	}
}
void printArr(int arr[], int size)
{
	cout << "Elements of arrays are: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void bubbleSortDescending(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int sortNumber = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sortNumber;
			}
		}
	}
}
int main()
{
	int size;
	cout << "Enter size of array: " << endl;
	cin >> size;

	int *arr = new int[size];

	inputArr(arr, size);
	cout << "Array before sorting: " << endl;
	printArr(arr, size);

	bubbleSortDescending(arr, size);
	cout << "Array after sorting: " << endl;
	printArr(arr, size);

	system("pause");
	return 0;
}
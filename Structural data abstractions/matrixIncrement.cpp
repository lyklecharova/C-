#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int row, column, number;

	cout << "Enter number of row: ";
	cin >> row;

	cout << "Enter number of column: ";
	cin >> column;

	cout << "Enter a number to add to each element: ";
	cin >> number;

	// Declare matrix

	int a[row][column];

	cout << "Enter the elements of the matrix: " << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "a[" << i << "][]" << j << "] = ";
			cin >> a[i][j];
		}
	}

	cout << "The resulting matrix after adding " << number << " to each element:" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << a[i][j] + number << " ";
		}
		cout << endl;
	}

	return 0;
}
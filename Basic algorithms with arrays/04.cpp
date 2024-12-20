#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void InsertionSort(int A[], int n)
{
    int k, index;
    for (int j = 1; j < n; j++)
    {
        index = A[j];
        k = j;
        while (k > 0 && (A[k - 1] > index))
        {
            A[k] = A[k - 1];
            k = k - 1;
        }
        A[k] = index;
    }
}
void read(int numbers[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        numbers[i] = rand() % (100);
    }
}
void print(int numbers[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        cout << numbers[i] << " ";
        cout << endl;
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n = 10;
    int a[n];
    read(a, n);
    cout << "Exit befofre sort " << endl;
    print(a, n);
    InsertionSort(a, n);
    cout << "Exit after sort " << endl;
    print(a, n);

    system("pause");
    return EXIT_SUCCESS;
}

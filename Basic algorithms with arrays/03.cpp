#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

void SelectSort(int A[], int n)
{
    int max;
    int b;
    for (int a = 0; a < n - 1; a++)
    {
        b = a;
        max = A[b];
        for (int j = a + 1; j < n; j++)
        {
            if (A[j] > max)
            {
                b = j;
                max = A[b];
            }
        }
        A[b] = A[a];
        A[a] = max;
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
    SelectSort(a, n);
    cout << "Exit after sort " << endl;
    print(a, n);

    system("pause");
    return EXIT_SUCCESS;
}

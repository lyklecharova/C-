#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

void QuickSort(int A[], int L, int R)
{
    int I, J;
    int X, Buf;
    I = L;
    J = R;
    X = A[(L + R) / 2];
    do
    {
        while (A[I] < X)
            I = I + 1;
        while (A[J] > X)
            J = J - 1;
        if (I <= J)
        {
            Buf = A[I];
            A[I] = A[J];
            A[J] = Buf;
            I = I + 1;
            J = J - 1;
        }
    } while (I <= J);
    if (L < J)
        QuickSort(A, L, J);
    if (I < R)
        QuickSort(A, I, R);
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
    QuickSort(a, 0, n - 1);
    cout << "Exit after sort " << endl;
    print(a, n);
    system("pause");
    return EXIT_SUCCESS;
}

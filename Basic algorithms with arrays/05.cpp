#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int linear_search(int data[], int size, int value)
{
    int i = 0;
    while (i < size && data[i] != value)
    {
        i++;
    };
    if (i < size)
        return i;
    else
        return -1;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int n = 5;
    int numbers[n] = {2, 5, 67, 8, 9};
    int search_value;
    cout << "Enter search value: ";
    cin >> search_value;
    int index = linear_search(numbers, n, search_value);
    if (index >= 0)
        cout << "Search value found at index: " << index << endl;
    else
        cout << "Search value not found, index returned: " << index << endl;

    system("pause");
    return 0;
}

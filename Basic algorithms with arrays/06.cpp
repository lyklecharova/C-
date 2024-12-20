#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int bsearch(int a[], int from, int to, int n)
{
    if (from > to)
        return -1;
    else
    {
        int mid = (from + to) / 2;
        if (a[mid] == n)
            return mid;
        else if (a[mid] < n)
            return bsearch(a, mid + 1, to, n);
        else
            return bsearch(a, from, mid - 1, n);
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int numbers[5] = {2, 3, 5, 8, 9};
    int search_value;
    cout << "Enter search value: ";
    cin >> search_value;
    int index = bsearch(numbers, 0, 4, search_value);
    if (index >= 0)
        cout << "Search value found at index: " << index << endl;
    else
        cout << "Search value not found, index returned: " << index << endl;
    system("pause");
    return 0;
}

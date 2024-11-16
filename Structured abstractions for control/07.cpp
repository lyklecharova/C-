#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double avg = 0;
    int br = 0;
    int n;
    char answer;

    do
    {
        cout << "n= ";
        cin >> n;
        br++;
        avg += n;
        cout << "If you like to continue press y or Y -> ";
        cin >> answer;
    } while (answer== 'y' || answer== 'y');

    cout << avg / br << endl;

    system("pause");
    return EXIT_SUCCESS;
}

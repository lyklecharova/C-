#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Define two integer variables
    int var1 = 5;
    int var2 = 15;

    // Define two pointers
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    // Change the value of the first variable through the pointer
    *ptr1 = 10;

    // Assign the value of the first variable to the second pointer
    ptr2 = ptr1;

    // Print the values of the variables
    cout << "Var1: " << var1 << ", Var2: " << var2 << endl;

    // Assign the second pointer to the first pointer
    ptr1 = ptr2;

    // Change the value of the variable the first pointer points to
    *ptr1 = 20;

    // Print the values of the variables again
    cout << "Var1: " << var1 << ", Var2: " << var2 << endl;

    // Pause the system and return EXIT_SUCCESS
    system("pause");
    return EXIT_SUCCESS;
}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    int result;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1;
        }
        result = num1 / num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else
    {
        cout << "Invalid operator" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    cout << "hello in my calclator app \n";

    int num1, num2, opr;

    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number\n";
    cin >> num2;
    cout << "Enter the operator \n";
    cout << "[1]==> \" + \" \n";
    cout << "[2]==> \" - \" \n";
    cout << "[3]==> \" * \" \n";
    cout << "[4]==> \" / \" \n";
    cin >> opr;

    switch (opr)
    {
    case 1:
        cout << "THE additon of " << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        break;
    case 2:
        cout << "THE subtraction of " << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
        break;
    case 3:
        cout << "THE multubile of " << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
        break;
    case 4:
        cout << "THE division of " << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
        break;
    default:
        cout << "invalid operator";
    }

    return 0;
}
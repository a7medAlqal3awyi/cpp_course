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
    if (opr == 1)
    {
        cout << "you choose addition the res = " << num1 + num2 << "\n";
    }
    else if (opr == 2)
    {
        cout << "you choose subtraction the res = " << num1 - num2 << "\n";
    }
    else if (opr == 3)
    {
        cout << "you choose multible the res = " << num1 * num2 << "\n";
    }
    else if (opr == 4)
    {
        cout << "you choose divission the res = " << num1 / num2 << "\n";
    }
    else
    {
        cout << "invalide input \n";
    }
}
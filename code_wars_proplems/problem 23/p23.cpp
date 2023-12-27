// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
#include <iostream>
using namespace std;
int basicOp(char op, int val1, int val2)
{
    switch (op)
    {
    case '+':
        cout << val1 + val2;
        return val1 + val2;
        break;
    case '-':
        cout << val1 - val2;
        return val1 - val2;
    case '*':
        cout << val1 * val2;
        return val1 * val2;
        break;
    case '/':
        cout << val1 / val2;
        return val1 / val2;
        break;

    default:
        break;
    }
    return 1;
}
int main()
{
    basicOp('-', 10, 5);
}
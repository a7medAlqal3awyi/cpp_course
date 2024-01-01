// https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp
#include <iostream>
#include <string>
#include <string>
using namespace std;
string correct(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '5')
            str[i] = 'S';
        if (str[i] == '0')
            str[i] = 'O';
        if (str[i] == '1')
            str[i] = 'I';
    }
    return str;
}
int main()
{
    correct("a00055511lkei");
}

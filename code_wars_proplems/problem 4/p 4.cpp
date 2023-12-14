//https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp
#include <iostream>
using namespace std;
string isEven(int number)
{

    number % 2 == 0 ? cout << "Even" : cout << "Odd";
    return number % 2 == 0 ? "Even" : "Odd";
}
int main()
{
    isEven(4);
}
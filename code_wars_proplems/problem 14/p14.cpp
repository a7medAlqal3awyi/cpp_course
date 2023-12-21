// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp
#include <iostream>
#include <string>
using namespace std;

// Function to demo erase()
void eraseDemo(string str)
{
    str.erase(str.end() - 1);
    str.erase(str.begin());
    cout << str;
}

int main()
{
    eraseDemo("Ali"); // output will ==> l
    return 0;
}

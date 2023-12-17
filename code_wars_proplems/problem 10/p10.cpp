// https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp
#include <iostream>
using namespace std;
int main()
{
    string clean;
    string h = "ahmed!!";
    for (int i = 0; i < h.length(); i++)
    {
        if (h[i] == '!')
        {
            continue;
        }
        clean += h[i];
    }
    cout << clean << "\n";

    // or 
    string clean;
    string h = "ahmed!!!!!!!";
    for (int i = 0; i < h.length(); i++)
    {
        if (h[i] != '!')
        {
            clean += h[i];
        }
    }
    cout << clean << "\n";
}
#include <iostream>
using namespace std;
// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp
int main()
{

    int year, century;
    cout << "Enter the year\n";
    cin >> year;
    if (year % 100 == 0)
    {
        century = year / 100;
        cout << "century is " << century << "\n";
    }
    else
    {
        century = year / 100;

        cout << "century is " << century + 1 << "\n";
    }
   
}

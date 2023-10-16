#include <iostream>
using namespace std;
int main()
{
    int discount = 0, price = 100, years;
    cout << "Enter the work years \n";
    cin >> years;
    switch (years)
    {
    case 1:
        discount = 10;
        break;
    case 2:
        discount = 20;
        break;
    case 3:
        discount = 30;
        break;

    default:
        break;
    }
    cout << "price after discount = " << price - discount;
}
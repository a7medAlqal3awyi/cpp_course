
#include <iostream>
#include <math.h>
using namespace std;
// Price of Mangoes V4 ==> 1
int mango(int quantity, int price)
{
    cout << (quantity - quantity / 3) * price;
    return 0;
}
int main()
{

    mango(5, 3);
    return 0;
    //******* problem 2 *********

    // int year;
    // cin >> year;

    // if (year > 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         cout << year / 100;
    //     }
    //     else
    //     {
    //         cout <<(year / 100)+1;
    //     }
    // }

    //******* problem 3 *********
    //  int n, x, y;

    // cin >> n;
    // cin >> x;
    // cin >> y;

    // if (n % x == 0 && n % y == 0)
    // {
    //     // 1) n =   3, x = 1, y = 3 =>  true because   3 is divisible by 1 and 3

    //     cout << "n = " << n << ", x = " << x << ", y = " << y << " => true because " << n << "is divisible by " << x << " and" << y << "\n";
    // }
    // else if (n % x == 0 && n % y != 0)
    // {
    //     // 3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3

    //     cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is not divisible by " << y << "\n";
    // }
    // else if (n % x != 0 && n % y == 0)
    // {
    //     // 3) n = 100, x = 5, y = 3 => false because 100 is not divisible by 3

    //     cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is not divisible by " << x << "\n";
    // }
    // else
    // {
    //     // 4) n =  12, x = 7, y = 5 => false because  12 is neither divisible by 7 nor 5

    //     cout << "n = " << n << ", x = " << x << ", y = " << y << " => false because " << n << " is neither divisible by " << x <<" nor "<<y<< "\n";
    // }

    //******* problem 5 string reverse *********
    // cout << "**************\n";
    // string reversed = "";
    // string str;
    // for (int i = str.length() - 1; i > -1; i--)
    // {
    //     reversed += str[i];
    // }
    // cout<< reversed;

    // a, e, i, o, u

    // char str[] = "ahmed";
    // int length = sizeof(str) / sizeof(str[0]);

    // for (int i = length; i>=0; i--)
    // {
    //     cout<< str[i];
    // }
}
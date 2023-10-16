#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int age = 300;
    cout << sizeof(age) << "\n";

    short int num2 = 200;
    cout << sizeof(num2) << "\n";

    short num3 = 200; // مش شرط اكتب  int
    cout << sizeof(num3) << "\n";

    cout << "***************"
         << "\n";
    cout << sizeof(short) << "\n";
    cout << sizeof(long) << "\n";
    cout << sizeof(long long) << "\n";
    cout << "***************"
         << "\n";
    signed int first_num = 100;
    cout << first_num << "\n";
    signed int second_num = -100;
    cout << second_num << "\n";

    unsigned int num5 = 100;
    cout << num5 << "\n";

    unsigned int num6 = -100; // problem
    cout << num6 << "\n";

    cout << "***************"
         << "\n";

    using lli = long long int;
    // anther method 
    typedef long long int lli;
    lli num7 = 10110101101;
    cout << num7 << "\n";
    return 0;
}
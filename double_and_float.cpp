#include <iostream>
using namespace std;
int main()
{
    // data types ===> double

    int num = 20.5;
    cout << num << "\n";
    cout << sizeof(num) << "\n";
    cout << "*******************************************\n";
    double num2 = 20.4;
    cout << num2 << "\n";
    cout << sizeof(num2) << "\n";

    cout << "*******************************************\n";

    float num3 = 20.5 + 5.9; // here compilier deal with nums as double and this will be slower than float to avoid this put 'f' affter each num like this

    float f1 = 20.5f + 5.9f; // here deal as float
    cout << num3 << "\n";
    cout << sizeof(num3) << "\n";
    cout << "*******************************************\n";

    auto dol = 5.5; // deal as double
    auto dd = 5.5f; // deal as float
    cout << sizeof(dol) << "\n"; // 8
    cout << sizeof(dd) << "\n";  // 4 
    return 0;
}
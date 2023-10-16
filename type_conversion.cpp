#include <iostream>
using namespace std;
int main()
{
    int a;
    double b = 20.5;
    a = b;
    cout << a << "\n";
    cout << sizeof(a) << "\n"; // 4 byte

    cout << "**********************"
         << "\n";

    char c = 'C';
    cout << int(c) << "\n"; // 67
    int d = 20;
    cout << d + c << "\n"; // 20+67 =87
    cout << "**********************"
         << "\n";

         int x=10;
         double y =10.5;
         cout<< x+y<<"\n";
         cout<< sizeof(x+y)<<"\n"; // 8 byte 

 cout << "**********************"
         << "\n";

         int q=10;
         double w =10.5;
         cout<< q+(int)w<<"\n";
         cout<< sizeof(q+(int)w)<<"\n"; // 8 byte 



    return 0;
}
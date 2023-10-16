#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(10 + 10) << "\n"; // 4

    cout << sizeof(10.5 + 10) << "\n"; // 8

    cout << sizeof(10.f + 10.f) << "\n"; // 4

    cout << sizeof(10 + 10.f) << "\n"; // 4

    cout << sizeof(10.5 + 10.f) << "\n"; // 8

    cout << sizeof(int(10.5 + 10.f)) << "\n"; // 4

    cout << "================\n";
    cout << 25 / 5 << "\n";

    cout << 25 / 3 << "\n"; // 8

    cout << 25.f / 3 << "\n"; // 8.3333333

    cout << 12% 5<< "\n"; //2 

    cout << 21%3<< "\n"; //1 


}
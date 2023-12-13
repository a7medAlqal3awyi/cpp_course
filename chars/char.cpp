#include <iostream>
using namespace std;
int main()
{

    // char
    char a = 'A';
    cout << a << "\n";
    cout << sizeof(a) << "\n";
    char b = 'B';
    cout << b << "\n";
    cout << sizeof(b) << "\n";

    cout << "****** convert from char to ACSII code ********\n";
    //    ASCII  ==>American Standard Code for Information Interchange

    // convert from char to ACSII code
    cout << int(a) << "\n"; // 65

    cout << int(b) << "\n"; // 66

    char x = 'a';

    cout << int(x) << "\n"; // 97

    cout << int('!') << "\n"; // 33

    cout << int('@') << "\n"; // 64

    // convert from ACSII code to CHAR

    cout << "***** convert from ACSII code to CHAR ******\n";

    cout << char(66)<< "\n"; // B  

    cout << char(80)<< "\n"; // P

    cout << char(43)<< "\n"; // +

    return 0;
}

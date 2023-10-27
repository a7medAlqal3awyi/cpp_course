#include <iostream>
/*
    Pointers is variable that store memory address of other variable
*/
using namespace std;
int main()
{
    int num = 20;
    int *ptr = &num;
    cout << "Value " << num << "\n";
    cout << "Address " << &num << "\n";
    cout << "Address " << ptr << "\n";
    cout << "Value  " << *ptr << "\n";

    *ptr = 50;

    // the value will change but the address not  
    cout << "Value " << num << "\n";
    cout << "Address " << &num << "\n";
    cout << "Address " << ptr << "\n";
    cout << "Value  " << *ptr << "\n";
}
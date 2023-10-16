#include <iostream>
using namespace std;
// Forward Declaration
int calc(int a, int b);
int main()
{

    // Call
    cout << calc(10, 50);
}
// Declaration
int calc(int a, int b)
{
    return a + b;
}
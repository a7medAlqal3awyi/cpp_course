#include <iostream>
using namespace std;
int main()
{
    bool is_open = true;                        // true  = 1
    cout << is_open + 10 << endl;               // here  1 +10 =11
    cout << true + true + true + false << endl; // 3 *true = 3 +0= 3
    bool test1 = 10 < 100;                      // Yes => true ==> 1
    bool test2 = 10 < 0;                        // Yes => true ==> 1
    cout << test1 << endl;
    cout << test2 << endl;
    return 0;
}
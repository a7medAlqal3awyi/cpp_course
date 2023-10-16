#include <iostream>
#include <array>
using namespace std;
int main()
{

    /*
    c-style array==>>       int   arr  []  = {1,2,3,4};
    c-style array==>>    datatype name [] = {};

    Timplate <data type , size > name ={}
    */
    array<int, 4> arrs = {1, 2, 3, 4};

    cout << arrs[0] << endl;
    cout << arrs[1] << endl;
    cout << arrs[2] << endl;
    cout << arrs[3] << endl;

    cout << "array size is " << arrs.size();

    cout << "***********************\n";

    arrs.fill(10);
    cout << arrs[0] << endl;
    cout << arrs[1] << endl;
    cout << arrs[2] << endl;
    cout << arrs[3] << endl;
    cout << "***********************\n";

    arrs.fill('A'); // WILL SET THE ASKY VALUE
    cout << arrs[0] << endl;
    cout << arrs[1] << endl;
    cout << arrs[2] << endl;
    cout << arrs[3] << endl;
    cout << "***********************\n";

    arrs.fill(true); // WILL SET 1
    cout << arrs[0] << endl;
    cout << arrs[1] << endl;
    cout << arrs[2] << endl;
    cout << arrs[3] << endl;
    cout << "***********************\n";

    arrs.fill(false); // WILL SET 0
    cout << arrs[0] << endl;
    cout << arrs[1] << endl;
    cout << arrs[2] << endl;
    cout << arrs[3] << endl;
    cout << "***********************\n";

    return 0;
}
//https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/cpp
#include <iostream>
using namespace std;
int getRealFloor(int f)
{
    if (f < 0)
    {
        f = f;
    }
    else if (f == 0)
    {

        f = 0;
    }
    else if (f > 0 && f < 13)
    {
        f = f - 1;
    }
    else if (f > 13)
    {
        f = f - 2;
    }
    return f;
}
int main()
{
    getRealFloor(15);
}
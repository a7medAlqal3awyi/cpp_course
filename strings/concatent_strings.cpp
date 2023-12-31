#include <iostream>
using namespace std;
int getRealFloor(int f)
{
    if (f < 0)
        return f;
    else if (f = 0)
        return 0;
    else if (f > 0 && f < 13)
        return f - 1;
    else if (f > 13)
        return f - 2;
    return 0;
}
int main()
{
    getRealFloor(4);
}
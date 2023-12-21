#include <iostream>
using namespace std;
int past(int h, int m, int s)
{
    const int one_second = 1000;
    const int one_min = 60 * one_second;
    const int one_hour = 60 * one_min;
    cout << (s * one_second) + (m * one_min) + (h * one_hour);
    return (s * one_second) + (m * one_min) + (h * one_hour);
}
int main()
{
    past(0, 1, 1);
}
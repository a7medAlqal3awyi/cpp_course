#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {
        10,
        20,
        30,
        40,
        -50,
        -5,
        0,
        5,
        50,
        80,
        80,
        60,
        30,
        78,
        52,
        20,
        2,
        0,
    };
    int val = 30;
    int range = count(nums.begin(), nums.end(), val);
    cout << "Number  " << val << "  founded " << range << "  times ";
    cout << "===================\n";
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "===================\n";
    cout << "After sorting Accending \n";

    sort(nums.begin(), nums.end());
    for (int &n : nums)
    {
        cout << n << "\n";
    }
    cout << "===================\n";

    cout << "After sorting Deccending \n";
    reverse(nums.begin(), nums.end());
    for (int &n : nums)
    {
        cout << n << "\n";
    }
}
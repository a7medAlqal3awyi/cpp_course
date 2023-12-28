#include <iostream>
#include <vector>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    int counter;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int o = i + 1; o < nums.size(); o++)
        {
            if (nums[i] == nums[o])

                counter++;
        }
    }
    if (counter == 0)
    {
        cout << "true";
        return false;
    }
    else
    {
        cout << "false";

        return true;
    }
}
int main()
{
    vector<int> vv = {10, 20, 20, 9, 54, 0, 5};
    containsDuplicate(vv);

    // int likes = 0;
    // cout << likes++ << "\n";
    // cout << likes << "\n";

    // cout << "================"
    //      << "\n";
    // cout << "****************"
    //      << "\n";

    // int views = 0;
    // cout << views-- << "\n";
    // cout << views << "\n";
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> two_nums;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int o = i + 1; o < nums.size(); o++)
            {
                if (nums[o] + nums[i] == target)
                {
                    two_nums.push_back(o);
                    two_nums.push_back(i);
                }
            }
        }
    }
};
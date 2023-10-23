#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it;
    for (it = nums.begin(); it < nums.end(); ++it)
    {
        cout << *it << "\n";
    }

    cout << "\n=====================\n";
    // ranged loop with for
    for (int val : nums)
    {
        cout << val << "\n";
    }

        cout << "\n=====================\n";

    int arr[5]={50,60,70,80,90};

    for (int val: arr){
        cout<<val<<"\n";
    }


}

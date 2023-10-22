/*
    Access
     => at()
     => square brackets [] ==>not prefered this

    Add
     => push_back ==>  add Element to the end

    Update
     at()

    Delete
     => pop_back()==>Remove Element from end
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {10, 20, 30, 40};
    // Access at or [] ==> not prefered make garbage value when access index out of range
    cout << nums[3] << "\n";
    cout << nums.at(3) << "\n";
    // cons of [] to access element

    cout << nums[4] << "\n";

    cout << "\n===============\n"
         << "\n";

    // Adding

    nums.push_back(55);
    cout << nums.size() << "\n";
    cout << nums[4] << "\n";
    cout << "\n===============\n";

    /// Update
    nums.at(3) = 44;
    cout << nums.at(3);
    cout << "\n===============\n";

    // Delete
    nums.push_back(400);
    cout << nums.size() << "\n";

    nums.pop_back();
    cout << nums.size() << "\n";
    cout << "Last element " << nums.at(4);

    cout << "\n********************************\n";

    vector<int> test = {8, 9, 10, 11, 12};
    cout << test.at(2) << "\n";
    cout << test.back() << "\n";
    cout << test.front() << "\n";
    cout << test.capacity() << "\n";
    test.pop_back();
    test.pop_back();
    cout << test.size() << "\n";
    test.push_back(300);
    test.push_back(200);
    test.push_back(100);
    cout << test.back()<<"\n";
    cout << test.size() << "\n";

    return 0;
}

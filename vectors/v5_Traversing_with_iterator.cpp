#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {11, 22, 33, 44};
    vector<int>::iterator it = nums.begin();
    vector<int>::iterator last = nums.end() - 1;
    cout << "First element is " << *it << "\n";
    cout << "First element is " << it[0] << "\n";
    cout << "Second element is " << it[1] << "\n";
    cout << "Third element is " << it[2] << "\n";
    cout << "Last element is " << *last << "\n";
    cout << "Before Last element is " << *(last - 1) << "\n";

    advance(it, 3);
    cout << "first after advance " << *it << "\n"; // will move 3 moves to right

    advance(it, -2);
    cout << "after advance " << *it << "\n"; // will move 2 moves to left 
}

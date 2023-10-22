/*
    Container => Array , Vector ,List

    What is iterator ?
        Used to Point to the memory address of container

    why we use ?
        1)Simplify the code
        2)support for many algoritgms like sortubg ad finding
        3)allow dealling with one element
        4)work the same way with all containers
        5)it reduce the complexity and execution time


    syntax
        Container <type>:: iterator itName ;
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it = nums.begin();
    auto ite = it + 1;

    cout << "First element " << *it << "\n ";
    cout << "Second element " << *ite << "\n ";

    nums.erase(it, it + 2);
    cout << "First element after update " << *it << "\n ";
}
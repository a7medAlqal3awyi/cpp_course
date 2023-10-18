
/*
 vector==>
    1\ need standard header to work
    2\ can be resize after insert or delete element
    3\ not index based and accessed by iteration
    4\ vector is slower than array
    5\ vector take more memory
    6/ vector available in c++ only

Array ==>

  1)C-array is language constuct
  2)canot be resize
  3)Element accessed by index
  4)array is more fast
  5)take less memory
  6) available in many language

*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;



int main()

{
    int nums[4] = {10, 20, 30};
    nums[3] = 100;
    cout << nums[3] << endl;

    int nums_size = 3;

    cout << "\n===========\n";

    array<int, 4> arr = {100, 200, 300, 400};
    cout << arr[3] << endl;

    // vector<int> num = {50, 60, 70};
    // cout << num[0] << "\n";
}

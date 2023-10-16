#include <iostream>
using namespace std;
int main()
{
  int nums[] = {100, 200, 300, 400, 500, 600};

  int numCounter = sizeof(nums) / sizeof(nums[0]);

  // first project output is 100, 300, 500
  // for (int i = 0; i < numCounter; i += 2)
  // {
  //     cout << nums[i] << "\n";
  // }

  // cout << "------- OR -------\n";
  // for (int i = 0; i < numCounter; i++)
  // {
  //     if (i % 2 == 0)
  //     {
  //         cout << nums[i] << "\n";
  //     }
  // }

  // cout << "------- OR -------\n";
  // for (int i = 0; i < numCounter; i++)
  // {

  //     cout << nums[i] << "\n";
  //     i++;
  // }

  // second project the output is 600,500,400,300
  // cout << nums[5];

  // for (int i =numCounter-1; i >=2; i--)
  // {
  //     cout << nums[i] << endl;
  // }
  // for (int week = 1; week <= 10; week++)
  // {
  //     cout << "week " << week << "\n";
  //     for (int day = 1; day <= 7; day++)
  //     {
  //         cout << "       day " << day << "\n";
  //     }
  // }

  int year = 100;
  for (year = 0; year > 0; year += 100)
  {
    return year;
  }
  return 0;
}
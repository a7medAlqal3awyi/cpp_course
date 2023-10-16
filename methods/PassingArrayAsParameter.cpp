#include <iostream>
using namespace std;

void clac(int arr[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += arr[i];
    }
    cout << "Result = " << result ;
}
int main()
{
    int nums[] = {10, 20, 30, 40,100};
    int length = sizeof(nums)/4;
    clac(nums, length);
    return 0;
}
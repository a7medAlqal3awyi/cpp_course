// https://www.codewars.com/kata/54edbc7200b811e956000556/train/cpp
#include <iostream>
#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == 1)
        {
            sum += arr[i];
        }
    }
    cout << sum;
    return sum;
}

using namespace std;
int main()
{
    vector<bool> x = {true, false, true, true, false};
    count_sheep(x);
}
https : // www.codewars.com/kata/515e271a311df0350d00000f/train/cpp
#include <iostream>
#include <vector>
#include <cmath>

        using namespace std;

int square_sum(const std::vector<int> &numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        int pw = pow(numbers[i], 2);
        sum += pw;
    }
    cout << "sum= " << sum;
    return sum;
}
int main()
{
    square_sum({});
}
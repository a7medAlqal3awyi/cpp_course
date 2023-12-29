#include <iostream>
using namespace std;
#include <vector>
using namespace std;
#include <vector>

double calcAverage(vector<int> values)
{
    if (values.size() == 0)
    {
        cout << "0";
        return 0;
    }
    else
    {
        double sum = 0, avg = 0;
        for (int i = 0; i < values.size(); i++)
        {
            sum += values[i];
        }
        avg = sum / values.size();
        cout << "avg= " << avg;

        return avg;
    }
}

int main()
{
    calcAverage({1, 2, 3, 4});
}
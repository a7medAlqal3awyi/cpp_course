#include <iostream>
using namespace std;
int main()
{
    string product[] = {"item1", "item3", "item3"};
    string size[] = {"SMALL", "LARGE", "XLARGE"};

    int length = sizeof(product) / sizeof(product[0]);

    for (int i = 0; i < length; i++)
    {
        for (int x = 0; i < length; i++)
        {
            cout << product[i] << " " << size[i] << "\n";
        }
    }
}
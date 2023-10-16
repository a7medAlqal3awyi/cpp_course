#include <iostream>
using namespace std;
// Price of Mangoes V4 ==> 1
int mango(int quantity, int price)
{
    cout << (quantity - quantity / 3) * price;
    return 0;
}
int main()
{

    mango(5, 3);
    return 0;
    }
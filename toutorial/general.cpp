#include <iostream>
using namespace std;
int main()
{
    int ans[3];
    int points;
    int squence[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};
    cout << "Hello in our game \n";

    cout << "Q1 : 1 5, 10, 16, ?  \n";
    cin >> ans[0];

    cout << "Q2 : 2, 4, 8, 16, ?  \n";
    cin >> ans[1];

    cout << "Q2 : 1, 1, 2, 3,   \n";
    cin >> ans[2];

    if (ans[0] == squence[0][4])
    {
        points++;
    }
    if (ans[1] == squence[1][4])
    {
        points++;
    }
    if (ans[2] == squence[2][4])
    {
        points++;
    }
    cout << "Finally your score is  " << points<<endl;

    if (points == 3)
    {
        cout << "Exellent \n";
    }
    else if (points == 2)
    {
        cout << "Very Good  \n";
    }
    else if (points == 1)
    {
        cout << "Good \n";
    }
    else
    {
        cout << "Try again  \n";
    }
    return 0;
}
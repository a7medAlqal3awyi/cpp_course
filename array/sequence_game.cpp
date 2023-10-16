#include <iostream>
using namespace std;
int main()
{
    int points;
    int answers[3];
    int sequence[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};

    cout << "Welcome in our game be ready\n";

    cout << "Q1: 1 | 5 | 10 | 16 | ?? \n";
    cin >> answers[0];

    cout << "Q2: 2 | 4 | 8 | 16 | ?? \n";
    cin >> answers[1];

    cout << "Q3: 1 | 1 | 2 | 3 | ?? \n";
    cin >> answers[2];

    if (answers[0] == sequence[0][4])
    {
        points++;
    }
    if (answers[1] == sequence[1][4])
    {
        points++;
    }
    if (answers[2] == sequence[2][4])
    {
        points++;
    }

    cout << "Total score is " << points << " from 3 \n";
    if (points == 3)
    {
        cout << "Excellent you answer all questions \n";
    }
    else if (points == 2)
    {
        cout << "Very good\n";
    }
    else if (points == 1)
    {
        cout << "Good\n";
    }
    else
    {
        cout << "You need to focus more\n";
    }
}
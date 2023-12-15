// https://www.codewars.com/kata/5ce9c1000bab0b001134f5af/train/cpp
#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int mon;
        cout << "Enter month\n";
        cin >> mon;
        if (mon > 0 && mon < 4)
        {
            cout << "Yout in Quartet 1 \n";
        }
        if (mon >= 4 && mon < 7)
        {
            cout << "Yout in Quartet 2 \n";
        }

        if (mon >= 7 && mon < 10)
        {
            cout << "Yout in Quartet 3 \n";
        }
        if (mon >= 10 && mon <= 12)
        {
            cout << "Yout in Quartet 4 \n";
        }
    }
}
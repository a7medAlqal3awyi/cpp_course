#include <iostream>
using namespace std;
int main()
{
    string clean;
    string ss = " asf af   9 ";
    // for (int i = 0; i < ss.length(); i++)
    // {
    //     if (ss[i] != ' ')
    //     {

    //         clean += ss[i];
    //     }
    // }

     // *************   or   ************   
    for (int i = 0; i < ss.length(); i++)
    {
        if (ss[i] == ' ')
        {
            continue;
        }
        clean += ss[i];
    }

    cout << clean << "\n";
}
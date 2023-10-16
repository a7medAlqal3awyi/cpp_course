#include <iostream>

#include <cctype>
using namespace std;
int main()
{
    cout << tolower('A') << "\n";

    cout << char(tolower('A')) << "\n";

    cout << "==========<<<<<<<<>>>>>>>>=========\n";

    cout << toupper('a') << "\n";

    cout << char(toupper('a')) << "\n";

    cout << "==========<<<<<<<<>>>>>>>>=========\n";
    // First app swap case A==>a m==>M
    string name = "AhMeDKhaLeD";
    int length = sizeof(name);
    for (int i = 0; i < length; i++)
    {
        if (isupper(name[i]))
        {
            cout << char(tolower(name[i]));
        }
        else
        {
            cout << char(toupper(name[i]));
        }
    }
    cout << "==========<<<<<<<<2222>>>>>>>>=========\n";
    // Second app Remove Space
    string name2 = "a H m         E d ";
    int size = sizeof(name2);
    for (int i = 0; i < size; i++)
    {
        // if (name2[i] == ' ')
        // {
        //     continue;
        // }
        // cout << name2[i];

        //Or
        if(isspace(name2[i])){
            continue;
        }
        cout<<name2[i];
    }
}
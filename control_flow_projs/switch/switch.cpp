#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter your day \n";
    cin>>day;

    switch (day)
    {
    case 1:
        cout << "case 1\n";
        break;
    case 2:
        cout<<"case 2\n";
        break;
    case 3:
        cout<<"case 3\n";
        break;

    default:
        cout<<"closed\n";
        break;
    }
}
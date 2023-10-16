#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char fname[] = "Ahmed ";
    char lname[] = "khaled";
    cout << fname << lname << "\n";
    cout << strcat(fname, lname) << "\n";
    cout << fname<< "\n";
    string first="Ahmed ";
    string last="Ahmed";
    cout << first.append(last)<< "\n";
    return 0;
}

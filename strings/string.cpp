#include <iostream>
using namespace std;
int main()
{
    cout << "Ahmed\n"; // const char [7]

    char name[] = "Mohammed";    // const char [9] ==> there is last char is \0 at any string
    char name1[] = "Mohamm\0ed"; // const char [9] ==> there is last char is \0 at any string

    cout << name << "\n";
    cout << name1 << "\n";
    cout << name[0] << "\n";
    cout << name[7] << "\n";
    cout << sizeof(name) << "\n";

    cout << "******************\n";

    char my_neme[]={'a','h','m','e','d','\0'};
    cout<<my_neme<<"\n";
     cout << my_neme[0] << "\n";
    cout << my_neme[4] << "\n";
    cout << sizeof(my_neme) << "\n";


    cout << "******************\n";

    string my_neme2="Ahmed";
    cout<<my_neme2<<"\n";
     cout << my_neme2[0] << "\n";
    cout << my_neme2[4] << "\n";
    cout << sizeof(my_neme2) << "\n";

}
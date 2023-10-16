#include <iostream>
using namespace std;
int main()
{
    /*
    syntax
    for(init;condition;update stop ){
        Bloc of code
    }
    */
    for (int i = 0; i < 6; i++)
    {
        cout << i << endl;
    }
    cout << "************////*/*/*/*/\n";

    int arr[] = {100, 200, 300, 400};
    int numCount = sizeof(arr) / sizeof(arr[0]); //==> 16/4 =4

    cout << arr[0] << "\n";
    cout << arr[1] << "\n";
    cout << arr[2] << "\n";
    cout << arr[3] << "\n";

    cout << "************////*/*/*/*/\n";

    for (int i = 0; i < numCount; i++)
    {

        cout << arr[i] << "\n";
    }


    
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = &arr[0];

    cout << "First Eelment \n\n";

    cout << "First value " << arr[0] << "\n";
    cout << "First Address " << &arr[0] << "\n";
    cout << "First Address " << ptr << "\n";
    cout << "First value " << *ptr << "\n";

    cout << "Second Eelment \n\n";

    cout << "First value " << arr[1] << "\n";
    cout << "First Address " << &arr[1] << "\n";
    cout << "First Address " << ptr + 1 << "\n";
    cout << "First value " << *(ptr + 1) << "\n";

    cout << "Third Eelment \n\n";
    cout << " Third value " << arr[2] << "\n";
    cout << " Third value " << *(ptr + 2) << "\n";
    cout << " Third address " << &arr[2] << "\n";
    cout << " Third address " << ptr + 2 << "\n";
}
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {500, 98, 54};

    cout << sizeof(arr) << "\n"; // 4 * 3 = 12

    cout << "FIRST ELEMENT : " << arr[0] << "\n";

    cout << "SECOND ELEMENT : " << arr[1] << "\n";

    cout << "location : " << &arr[0] << "\n";
    cout << "location : " << &arr[1] << "\n";
    cout << "location : " << &arr[2] << "\n";

    double dos[]{20, 84.6, 45.9, 80, 556.6};
    cout << sizeof(dos); // 8 * 5 = 40

    cout << "********************************"
         << "\n";

    int num[4]; // will set(update) values
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;

    cout << "first element " << num[0] << "\n";
    cout << "secind element " << num[1] << "\n";
    cout << "third element " << num[2] << "\n";

    num[1] = 2000;
    cout << "secind element after update " << num[1] << "\n";
    cout << "********************************"
         << "\n";

    int ahmed[] = {10, 20, 30, 40, 50, 60};
    cout << "the number of element " << sizeof(ahmed) / 4;

    return 0;
}
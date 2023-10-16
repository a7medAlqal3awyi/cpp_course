#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[] = {7, 8, 9};

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << arr[0][2] << "\n"; // 3
    cout << arr[1][1] << "\n"; // 5
    cout << arr[2][0] << "\n"; // 7

    int matrix[3][2] = {
        {5, 2},
        {7, 8},
        {9, 7}};
            cout << matrix[1][1] << "\n"; // 9

}
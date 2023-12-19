// https://www.codewars.com/kata/57f780909f7e8e3183000078
#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int res=1; 
    for (int i = 0; i < len; i++)
    {
        res*=arr[i]; 

        
    }
    cout<<res; 
}
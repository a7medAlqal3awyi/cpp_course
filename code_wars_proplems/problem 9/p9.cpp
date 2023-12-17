#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> arr = {50, 60, 70, 80};

    for (int i = 0; i < arr.size(); i++)
    {
         arr[i]*=-1; 
    }
}
#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 4> arr = {50, 60, 70, 80};
    cout << arr.front() << "\n";
    cout << arr.at(1) << "\n";
    cout << arr.back() << "\n";
    cout << arr.empty() << "\n";
    cout << arr.size() << "\n";
}
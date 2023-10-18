#include <iostream>
using namespace std;
#include <vector>
int main()
{
    /*
    vector is a container for similar data like array
    vector is dynamic array that can change the size
    vector is a class templete
    how to write
    vector <datatype> variable name = {}
    */

    vector<int> v1 = {10, 20, 30, 40};

    vector<int> v2{50, 60, 40, 80};

    vector<int> v3(4, 50); // 4 is the size and fill all values with 50

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << "\n============\n";

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << "\n============\n";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3.at(i) << " ";
    }
    cout << "\n============\n";
    cout << "THE vector size is "<<v3.size();
     cout << "\n============\n";
     v3.push_back(100);
    cout << "THE vector size is "<<v3.size();

 cout << "\n============\n";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3.at(i) << " ";
    }

}
#include <iostream>
using namespace std;
int main()
{
    int age = 15;
    int points = 800;
    int grade = 8;
    // if (age >= 20)
    // {
    //     cout << "your age is ok\n";
    // }
    // else if (points > 500)
    // {
    //     cout << "your points is ok\n";
    // }
    // else if (grade > 5)
    // {
    //     cout << "your grade is ok\n";

    // }
    // else
    // {
    //     cout << "Iam sorry \n";
    // }

    //  Nested ternaryconditional
    cout << (age >= 20 ? "age is ok " : (points > 1000 ? "yes ok points" : "No p "));
    return 0;
}
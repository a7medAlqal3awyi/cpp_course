#include <iostream>
using namespace std;
/*
   DRY ==> Don't Repeate Youself
   syntax
   returnDataType functionName()
   {
       block of code
   }
   */
void sayHello(string name, string msg, int age)

{
    cout << msg << " " << name << "\n";
    cout << "your age is " << age << "\n";
}

void iceBox(string item)
{
    if (item == "fruits")
    {
        cout << item << " should be fresh\n";
    }
    else if (item == "Coca")
    {
        cout << item << " should be cold\n";
    }
    else
    {
        cout << item << " Invalild item \n";
    }
}
void calc(int n1, int n2, string opr)
{
    if (opr == "+")
    {
        cout << "you choise plus opretor\n ";
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    }
    else if (opr == "-")
    {
        cout << "you choise Minus opretor\n ";
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    }
    else if (opr == "*")
    {
        cout << "you choise Multible opretor\n ";
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    }
    else if (opr == "/")
    {
        cout << "you choise divide opretor\n ";
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    }
    else
    {
        cout << "Invailde operator\n";
    }
}

int main()
{
    int n1, n2;
    string opr;
    cout << "Enter first number\n";
    cin >> n1;
    cout << "Enter second number\n";
    cin >> n2;
    cout << "Enter operator you want \n";
    cin >> opr;
    calc(n1, n2, opr);
}

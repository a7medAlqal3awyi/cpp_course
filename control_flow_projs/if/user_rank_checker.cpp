#include <iostream>
using namespace std;
int main(){
    int points;
    cout<<"Enter the points\n";
    cin>>points;
    if(0<points&&points<=500){
        cout<<"Not Bad\n";
    }else if (500<points&&points<=1000)
    {
        cout<<"Very Good \n";
    }else if (points>1000)
    {
        cout<<"Gammmmmmmmmmmmed \n";
    }else{
                cout<<"You T3paaan\n";

    }
    
}
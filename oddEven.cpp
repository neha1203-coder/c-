#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    if(a % 2 == 0 && a != 0)
    {
        cout<<"a is even numaber.";
    }
    else
    {cout<<"a is odd number.";
    }
    if (a == 0)
    cout<<"invalid numaber.";

}
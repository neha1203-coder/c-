#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    if(a % 5 == 0 && a != 0)
    {
        cout<<"a is divisible by 5";
    }
    else
    cout<<"a is not divisible by 5";
}
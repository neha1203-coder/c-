#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    if(a>99 && a<1000)
    {
        cout<<"it is three digit number";
    }
    else{
        cout<<"it is not three digit number";
    }
}
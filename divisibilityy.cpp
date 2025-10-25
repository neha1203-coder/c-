#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    if(a % 3 == 0 && a % 5 == 0 && a % 15 != 0){
        cout<<a<<" is divisible by 3 or 5 but not divisible by 15.";
    }
    else
    cout<<"enter another no";
}
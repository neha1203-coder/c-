#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter 1st side:";
    cin>>a;
    cout<<"enter 2nd side:";
    cin>>b;
    cout<<"enter 3rd side:";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"triangle is valid";
    }else
    cout<<"invalid triangle";
}
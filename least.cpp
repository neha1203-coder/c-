#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter first no:";
    cin>>a;
    cout<<"enter second no:";
    cin>>b;
    cout<<"enter third no:";
    cin>>c;
    if(a<b && a<c){
        cout<<a<<" is the smallest no";}
        else if(b<a && b<c){
            cout<<b<<" is the smallest no";
        }
        else
        cout<<c<<" is the smallest no";
    }

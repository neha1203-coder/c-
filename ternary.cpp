#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    (a % 2 == 0) ? cout<<a<<" is even" : cout<<a<<" is odd";
}
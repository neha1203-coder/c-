#include <iostream>
using namespace std;
int main(){
    int num1;
    cin>>num1;
    char op;
    cin>>op;
    int num2;
    cin>>num2;
    if(op == '+')  cout<<num1+num2;
    if(op == '-') cout<<num1-num2;
    if(op == '*') cout<<num1*num2;
    if(op == '/')  cout<<num1/num2;

}
#include <iostream>
using namespace std;
int main(){
    float cp , sp;
    cout<<"enter cost price:";
    cin>>cp;
    cout<<"enter selling price:";
    cin>>sp;
    if(cp > sp)
    {
        cout<<"seller profit is"<<cp - sp;

    }
   else if(cp<sp){
        cout<<"seller loss is:"<<sp - cp;
    }
    else{
    cout<<"no loss no profit";
}}
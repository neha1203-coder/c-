#include <iostream>
using namespace std;
int main(){
    int age1, age2,age3;
    cout<<"enter Ram's age";
    cin>>age1;
    cout<<"enter shyam's age";
    cin>>age2;
    cout<<"enter ajay age";
    cin>>age3;
    if(age1>age2 && age1>age3){
    cout<<"ram is the eldest brother";}
       else if(age1<age3 && age3>age1){
    cout<<"ajay is the eldest brother";}
    else
   { cout<<"shyam is the elsdest brother";}


}
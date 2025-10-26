#include <iostream>
using namespace std;
int main(){
    int num1, num2, choice;
    double result;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    cout<<"choose an operation:"<<endl;
    cout<<"1. addition"<<endl;
    cout<<"2. subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. division"<<endl;
    cin>>choice;

    switch (choice){
        case 1: result = num1 + num2; cout<<result; break;
        case 2: result = num1 - num2;  cout<<result; break;
        case 3: result = num1 * num2; cout<<result; break;
        case 4: if(num1 !=0){ result = num1 / num2; cout<<result;}
        else{ cout<< "division not valid"; } break;
        default: cout<<"envalid choice! enter no between 1-4";
    }
}







#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter an year:";
    cin>>year;
    if((year % 400 == 0 ) || (year % 4 == 0 && year % 100 != 0)){
    cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
}
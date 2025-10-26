#include <iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    if(x==y);   //here if is finished
    cout<<x<<" "<<y<<endl;  //indipendent
    if(x==10)
    cout<<x<<endl;  //dependent on x
    else;     //here else is finished
    cout<<y;  //indipendent
}
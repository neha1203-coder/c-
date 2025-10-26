#include <iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    if(x==y);   //here if is finished
    cout<<x<<" "<<y<<endl;  //indipendent
    if(x==10)
    cout<<x<<endl;  //dependent on x
    else;     //here else is finished
    cout<<y<<endl;  //indipendent
    int s = 3,r,t;
    r=s=10;     //(right to left) so first 10 assign to 10 then value of s which is 10 assign to r
    t=s<10;     //(< has higher precedence to =) first check s<10 which is false because s=10 so it gives 0
    cout<<s<<" "<<r<<" "<<t;
}
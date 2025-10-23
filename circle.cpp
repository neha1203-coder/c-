#include <iostream>
using namespace std;
int main(){
    float r, perimeter, area;
    float pi = 3.14;
    cout<<"enter the value of r:";
    cin>>r;
    perimeter = 2*pi*r;
    area = pi*r*r;
    cout<<"area of circle:"<<area<<endl<<"perimeter of circle:"<<perimeter;
    
}
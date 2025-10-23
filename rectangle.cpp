#include <iostream>
using namespace std;
int main(){
    int l, b, perimeter, area;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter breadth:";
    cin>>b;
    perimeter = 2*(l + b);
    area = l * b;
    cout<<"perimeter of rectangle:"<<perimeter<<endl<<"area of rectangle:"<<area<<endl;
    if(area>perimeter)
    {
        cout<<"area is greater than perimeter";

    }
    else{
        cout<<"perimeter is greater than area";
    }
}


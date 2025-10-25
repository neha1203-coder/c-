#include <iostream>
using namespace std;
int main(){
    double celcius, fahrenheit;
    cout<<"enter celcius value:";
    cin>>celcius;
    fahrenheit = (celcius * 9/5) + 32;
    cout<<"fahrenheit:"<< fahrenheit;
}
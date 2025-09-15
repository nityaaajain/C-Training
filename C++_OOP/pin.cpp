#include<iostream>
using namespace std;
int main(){
    int pin=9192;
    int p;
    cout<<"Enter pin:";
    cin>>p;
    if(pin==p)
    cout<<"Correct pin";
    else
    cout<<"Wrong pin";
    return 0;
}
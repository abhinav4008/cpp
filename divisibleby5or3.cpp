#include <iostream>
using namespace std;
 int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%5==0 || x%3==0)
    cout<<"it is divisible by 3 or 5";
    else
    {cout<<"it is not divisible by 3 or 5";}
 }
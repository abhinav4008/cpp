#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a digit of which you want to print the table";
    cin>>x;
    for(int i=x;i<=1000;i=i+x)
    cout<<i <<"    ";
}
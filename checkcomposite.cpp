#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    bool flag=true;
    for(int i=2;i>=2;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }{
    if (flag==true)
    cout<<"prime";
    if (flag==false)
    cout<<"composite";}
    // for(int i=2;i>=2;i++){
    //     if(n%i!=0)
    //     cout<<"prime number";
    //     if(n%i==0)
    //     cout<<"composite";
    //     break;
    // }
}
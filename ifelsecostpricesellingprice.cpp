#include <iostream>;
using namespace std;

int main(){
    int cp;
    cout <<"enter cost price";
    cin>>cp;
    int sp;
    cout<<"enter selling price ";
    cin>>sp;
    if(sp>cp)
    {cout<<sp-cp <<endl;
    cout<<" you have made profit";}
    else if(cp>sp)
    // cout<<cp-sp;
    {cout<<" loss is: ";
    cout<<cp-sp;}
    else{
    cout<<"break even";}
    

    
    



}
#include <iostream>
using namespace std;

int main () {
    int x;
    cout<<"enter n : ";
    cin>>x;
    for(int i=x-1;i>=2;i--){
        if(x%i==0) {
            cout<<i<<"   ";
            break;

        }

    }
   
}
#include <iostream>
using namespace std;

int main ( ){
    int n =4;
    int mid =(n/2)+1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i==1 || i==4 ||j==1   ||j==4  )
            cout<<"* ";
            else
            cout<<"  ";
        }cout<<endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int x;
    cout <<"enter n: ";
    cin>>x;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            cout<<(char) (i+64);
        }cout<<endl;
    }
}
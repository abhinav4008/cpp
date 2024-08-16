#include <iostream>
using namespace std;

void usa (){
    cout<<"welcome in usa"<<endl;
    return;
}

void india () {
    cout<<"welcome in india"<<endl;return;
    usa ();
}

int main () {
    cout<<"wowwwww"<<endl;
    india ();
}
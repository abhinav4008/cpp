#include <iostream>
using namespace std;

int main() {
    float x;
    cout<<"enter the x coordinate: ";
    cin>>x;

    float y;
    cout<<"enter y coordinate: ";
    cin>>y;

    if(x>0 and y>0)
    {cout<<"first quadrant";}

    if(x<0 and y>0)
    {cout<<"second quadrant";}

    if(x>0 and y<0)
    {cout<<"third quadrant";}

    if(x==0 and y>0)
    {cout<<"y axis";}

    if (x>0 and y==0)
    {cout<<"x axis";}

    if(x=0 and y==0)
    {cout<<"origin ";}

    




}
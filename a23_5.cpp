// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int l,b,h,volume;
    cout<<"Enter the length , breadth and height of cuboid :"<<endl;
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"The volume of cuboid is "<< volume ;
    return 0;
    }
// Write a C++ program to calculate the area of a circle.

#include<iostream>
using namespace std;
int main()
{
    int r,area;
    cout<<"Enter the value of radius :"<<endl;
    cin>>r;
    area=(3.14)*r*r;
    cout<<"The area of circle is " << area;
    return 0;
}
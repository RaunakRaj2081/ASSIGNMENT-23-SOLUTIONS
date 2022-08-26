// Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    if(a>b)
    cout<<"The greatest number is "<< a;
    else if(b>a)
    cout<<"The greatest number is "<< b;
    else
    cout<<"Both numbers are equal";
    return 0;

}
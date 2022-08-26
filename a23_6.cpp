// Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    float a,s,d,avg;
    cout<<"Enter 3 numbers :"<< endl;
    cin>>a>>s>>d;
    avg=(a+s+d)/3;
    cout<<"The average of given numbers is "<< avg;
    return 0;
    }
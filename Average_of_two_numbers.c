#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float avg;
    cin>>a>>b;
    avg=(a+b)/2.0;
    cout<<"Average"<<" of "<<a<<" and "<<b<<" is: "<<std::fixed<<setprecision(2)<<avg;
}
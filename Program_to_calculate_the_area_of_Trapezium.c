#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    float area;
    cin>>a>>b>>c;
    area=0.5*(c)*(a+b);
    cout<<std::fixed<<setprecision(4)<<area;
    
}
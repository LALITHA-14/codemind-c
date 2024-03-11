#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    float hyp=sqrt((a*a)+(b*b));
    cout<<std::fixed<<setprecision(2)<<float(hyp)
    ;
}
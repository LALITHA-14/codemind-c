#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    float vol=1.333333*3.14*a*a*a;
    cout<<std::fixed<<setprecision(2)<<vol;
}
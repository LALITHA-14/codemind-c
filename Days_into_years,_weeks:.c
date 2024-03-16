#include<iostream>
using namespace std;
int main()
{
    int days;
    cin>>days;
    int years=days/365;
    int weeks=(days%365)/7;
    cout<<years<<"
"<<weeks;
}
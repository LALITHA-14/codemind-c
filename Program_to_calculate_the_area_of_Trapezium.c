#include<stdio.h>
int main()
{
    int b1=2,b2=3,h=4;
    scanf("%d%d%d",&b1,&b2,&h);
    float area=0.5*h*(b1+b2);
    printf("%.4f",area);
}
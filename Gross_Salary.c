#include<stdio.h>
int main()
{
    float b,d,h,gs;
    scanf("%f",&b);
    if (b<=10000)
    {
        d=b*0.80;
        h=b*0.20;
    }
    else if (b<=20000)
    {
        d=b*0.90;
        h=b*0.25;
    }
    else if (b>20000)
    {
        d=b*0.95;
        h=b*0.30;
    }
    gs=b+d+h;
    printf("%.2f",gs);
}
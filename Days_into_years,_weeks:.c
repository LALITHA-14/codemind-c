#include<stdio.h>
int main()
{
    int y,w,d;
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    printf("%d
",y);
    printf("%d",w);
}
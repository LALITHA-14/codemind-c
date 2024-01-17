#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int digits=a%100;
    printf("%02d",digits);
}
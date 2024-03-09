#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float area=(0.5)*c*(a+b);
    printf("%.4f",area);
}
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=a+b;
    int e=b+c;
    int f=a+c;
    if(b>a && c>a)
    {
        printf("%d",e);
    }
    else if(a>c && b>c)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",f);
    }
}

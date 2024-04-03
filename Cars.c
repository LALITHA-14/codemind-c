#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cars=n/4;
    if(n%4!=0)
    {
        printf("%d",cars+1);
    }
    else
    {
        printf("%d",cars);
    }
}

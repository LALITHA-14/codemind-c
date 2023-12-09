#include<stdio.h>
int main()
{
    int n,s=0,fd,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    s=fd+ld;
    printf("%d",s);
}
#include<stdio.h>
int main()
{
    int i,n,r,t,rev=0;
    scanf("%d",&n);
    t=n;
    for (i=1;i<=n;i++)
    {
        while (n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if (rev==t)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}
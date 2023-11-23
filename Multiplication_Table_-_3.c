#include<stdio.h>
int main()
{
    int i,n,m,e;
    scanf("%d%d%d",&n,&m,&e);
    for (i=m;i<=e;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}
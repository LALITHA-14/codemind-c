#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if ((x/y)+(x%y))
    {
        printf("%d",(x/y)+(x%y));
    }
    else
    {
        printf("%d",x/y);
    }
}
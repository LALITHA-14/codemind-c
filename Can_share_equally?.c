#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((x%2==0 && y%2==0) || (x%2==0 && y%2!=0 && x>=2))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

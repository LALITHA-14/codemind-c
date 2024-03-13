#include<stdio.h>
int main()
{
    int i,j,r1,c1;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}
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
    int sum[j]={0};
    for(j=0;j<c1;j++)
    {
        for(i=0;i<r1;i++)
    {
        sum[j]=sum[j]+a[i][j];
    }
    }
    for(j=0;j<c1;j++){
    printf("%d ",sum[j]);
}
return 0;
}

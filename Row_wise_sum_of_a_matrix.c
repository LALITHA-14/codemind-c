#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
         int rsum=0;
        for(j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("%d ",rsum);
    }
}

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
    int esum=0,osum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]%2==0)
            {
                esum=esum+arr[i][j];               
            }
            else if(arr[i][j]%2==1)
            {
                osum=osum+arr[i][j];
            }
        }
    }
    printf("%d %d",esum,osum);
}
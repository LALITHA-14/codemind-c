#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=0,key;
    scanf("%d",&key);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(key==arr[i][j])
            {
            flag=1;
        }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else{
        printf("0");
    }
}
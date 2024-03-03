#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int x=sum/n;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
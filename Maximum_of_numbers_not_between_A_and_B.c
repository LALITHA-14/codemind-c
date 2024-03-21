#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,max=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]>max)
            {
            max=arr[i];
        }
        }
    }
    if(max)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}
#include<stdio.h>
int main()
{
    int n,osum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            osum=osum+arr[i];
        }
    }
    printf("%d",osum);
}
#include<stdio.h>
int sum(int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=sum(arr,n);
    printf("%d",res);
}
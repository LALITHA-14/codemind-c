#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se,found=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            found=found+1;
            break;
        }
    }
    if(found==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
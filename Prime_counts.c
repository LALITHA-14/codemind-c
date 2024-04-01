#include<stdio.h>
int main() 
{
    int n,i,j,c=0;
    scanf("%d",&n);
	for(i=2;i<=n;i++) 
	{
        int prime=1;
        for(j=2;j*j<=i;j++) 
		{
            if(i%j==0)  
			{
                prime=0;
                break;
            }
        }
        if(prime) 
		{
            c++;
        }
    }
    printf("%d",c);
}

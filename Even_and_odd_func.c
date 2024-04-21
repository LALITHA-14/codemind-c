#include<stdio.h>
int e_o(int a,int b)
{
	if (a%b==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int res=e_o(a,b);
	printf("%d",res);
}

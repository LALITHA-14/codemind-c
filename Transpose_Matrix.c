#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter row size and column size");
	scanf("%d%d",&r,&c);
	int a[r][c],trans=a[r][c];
	printf("Enter elements of a");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
	printf("Printing the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
	}
	printf("\n");
}

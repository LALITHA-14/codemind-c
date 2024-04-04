#include<stdio.h>
int main()
{
	char str[20],str1[20];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str);
}

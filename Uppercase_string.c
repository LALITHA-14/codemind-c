#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	strupr(str);
	printf("%s",str);
}

#include<stdio.h>
int main()
{
	char a='a';
	void *ptr;
	ptr=&a;
	printf("%c\n",*(char *)ptr); //*ptr *(&a)=10
}

#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a=50*n;
        int b=n*10;
        int c=n*15;
        int d=a-(b+b+c);
        printf("%d\n",d);
    }
}


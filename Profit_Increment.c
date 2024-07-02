#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int a=x+(10*x)/100;
        int b=a-x+y;
        printf("%d\n",b);
    }
}


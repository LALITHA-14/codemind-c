#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int k,x;
        scanf("%d%d",&k,&x);
        printf("%d\n",k-x);
    }
}


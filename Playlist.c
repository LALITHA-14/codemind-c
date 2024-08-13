#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        printf("%d\n",n/(3*x));
    }
}


#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>=1000){
        printf("%d\n",x/10);
    }
    else
    {
        printf("100\n");
    }
}
}


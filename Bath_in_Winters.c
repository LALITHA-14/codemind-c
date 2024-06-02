#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int a=2*y;
        if(a>x)
        {
            printf("0\n");
        }
        else 
        {
            printf("%d\n",x/a);
        }
    }
}


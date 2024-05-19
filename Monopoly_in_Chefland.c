#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int r1,r2,r3;
        scanf("%d%d%d",&r1,&r2,&r3);
        int a=r1+r2;
        int b=r2+r3;
        int c=r3+r1;
        if(r1>b || r2>c || r3>a)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}


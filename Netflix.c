#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c,x;
        scanf("%d%d%d%d",&a,&b,&c,&x);
        int d=a+b;
        int e=b+c;
        int f=a+c;
        if(d>=x || e>=x || f>=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


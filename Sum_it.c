#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int d=a+b;
        if(d==c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


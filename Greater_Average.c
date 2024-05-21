#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        float d=(a+b)/2.0;
        if(d>c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x<=15)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


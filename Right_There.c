#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n<=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


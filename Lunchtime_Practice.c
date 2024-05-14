#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>=1 && x<=4)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


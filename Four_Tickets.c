#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x*4<=1000)
        {
            printf("YES\n");
        }
        else if(x*4>1000)
        {
            printf("NO\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


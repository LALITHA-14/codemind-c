#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>=30)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


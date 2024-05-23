#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        int h=x%60;
        if(h<=7)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
}


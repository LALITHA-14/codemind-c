#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>0 && y>0 && x==y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
}
}


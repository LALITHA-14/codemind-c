#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,x,y;
        scanf("%d%d%d%d",&a,&b,&x,&y);
        if((a*b)<=(x*y))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}


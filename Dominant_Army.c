#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int b=y+z;
        int a=x+y;
        int c=x+z;
        if(x>b || z>a || y>c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int w,x,y,z;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        int c=w+(y*z);
        if(c>x)
        {
            printf("overflow\n");
        }
        else if(c==x)
        {
            printf("filled\n");
        }
        else
        {
            printf("Unfilled\n");
        }
        
    }
}


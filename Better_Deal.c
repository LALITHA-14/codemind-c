#include <stdio.h>
int main(void) { 
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c=100-(a*1);
        int d=200-(b*2);
        if(c<d)
        {
          printf("FIRST\n");
        }
        else if(c==d)
        {
            printf("BOTH\n");
        }
        else 
        {
            printf("SECOND\n");
        }
    }
}


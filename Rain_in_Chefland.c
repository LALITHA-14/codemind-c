#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x<3)
        {
            printf("LIGHT\n");
        }
        else if(x>=3 && x<7)
        {
            printf("MODERATE\n");
        }
        else
        {
            printf("HEAVY\n");
        }
    }
}


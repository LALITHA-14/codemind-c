#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x<=50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
        
    }
}


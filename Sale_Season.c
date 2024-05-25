#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x<=100)
        {
            printf("%d\n",x);
        }
        else if(100<x && x<=1000)
        {
            printf("%d\n",x-25);
        }
        else if(1000<x && x<=5000)
        {
            printf("%d\n",x-100);
        }
        else
        {
            printf("%d\n",x-500);
        }
    }
}


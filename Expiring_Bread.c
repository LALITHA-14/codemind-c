#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int b=m*k;
        if(n<=b)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%3==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


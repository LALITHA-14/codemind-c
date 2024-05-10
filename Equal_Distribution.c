#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c=a+b;
        if(c%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


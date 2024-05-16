#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)>=100 && a>=10 && b>=10 && c>=10)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }
}


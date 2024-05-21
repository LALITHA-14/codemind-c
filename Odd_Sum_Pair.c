#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int d=a+b;
        int e=b+c;
        int f=a+c;
        if(d%2==1 || e%2==1 || f%2==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


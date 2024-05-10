#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a<c && b<c)
        {
            printf("Charlie\n");
        }
        else if(b>a && b>c)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
}


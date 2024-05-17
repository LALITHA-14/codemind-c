#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int e=a-c;
        int f=b-d;
        if(e<f)
        {
            printf("First\n");
        }
        else if(e>f)
        {
            printf("Second\n");
        }
        else
        {
            printf("Any\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int A,B;
        scanf("%d%d",&A,&B);
        if(A>B)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
}


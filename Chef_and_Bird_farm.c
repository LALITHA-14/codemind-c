#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z%x==0 && z%y!=0)
        printf("CHICKEN\n");
        else if(z%x!=0 && z%y==0)
        printf("DUCK\n");
        else if(z%x==0 && z%y==0)
        printf("ANY\n");
        else
        printf("NONE\n");
}
}


#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(10*a==5*b){
            printf("ANY\n");
        }
        else if(10*a>5*b){
            printf("FIRST\n");
        }
        else{
            printf("SECOND\n");
        }
    }
}


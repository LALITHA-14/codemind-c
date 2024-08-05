#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n%6==0){
            printf("%d\n",(n/6)*x);
        }
        else{
            printf("%d\n",((n/6)+1)*x);
        }
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,p,q;
        scanf("%d%d%d",&x,&p,&q);
        int a=p-q;
        int b=a*x;
        printf("%d\n",b);
    }
}


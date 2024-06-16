#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int k,x;
        scanf("%d%d",&k,&x);
        int a=7*k;
        printf("%d\n",a-x);
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        int n,x;
        scanf("%d%d",&n,&x);
        printf("%d\n",n-x);
    }
}


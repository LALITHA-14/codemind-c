#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        int a=c-x;
        int z=a*y;
        printf("%d\n",z);
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int w,x,y,z;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        int a=x-y;
        int c=w+a*z;
        printf("%d\n",c);
    }
}


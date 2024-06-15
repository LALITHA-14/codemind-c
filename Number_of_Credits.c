#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int a=4*x;
        int b=2*y;
        int c=0*z;
        printf("%d\n",a+b+c);
        }
}


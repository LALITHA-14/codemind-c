#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,x;
        scanf("%d%d%d",&n,&m,&x);
        int a=2*n;
        int b=2*m;
        int c=a+b;
        printf("%d\n",(x*c));
    }
}


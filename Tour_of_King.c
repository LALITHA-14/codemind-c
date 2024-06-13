#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a=5*n;
        int b=7*m;
        printf("%d\n",a+b);
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        if(n>=m)
        printf("%d\n",n-m);
        else
        printf("0\n");
    }
}


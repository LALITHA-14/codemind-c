#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,k;
        scanf("%d%d%d",&n,&x,&k);
        int a=n*x;
        if(a<=k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}



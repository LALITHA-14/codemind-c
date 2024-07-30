#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a=36*m;
        if(n<=a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


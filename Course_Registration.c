#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int a=n+k;
        if(a<=m){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}


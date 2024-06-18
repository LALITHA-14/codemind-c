#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        if(n<k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


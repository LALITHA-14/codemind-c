#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int r1,r2,r3,r4,r5;
        scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
        if((r1+r2+r3+r4+r5)>=4){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


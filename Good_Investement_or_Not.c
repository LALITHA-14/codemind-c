#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a=2*y;
        if(x>=a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


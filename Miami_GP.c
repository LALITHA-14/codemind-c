#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        if(y<=x*1.07){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


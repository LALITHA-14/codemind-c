#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a=x+200;
        if(y>=x && y<=a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


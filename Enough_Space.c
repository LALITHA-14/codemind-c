#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        int a=y*2;
        int c=x+a;
        if(n>=c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


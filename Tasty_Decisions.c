#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int a=2*x;
        int b=5*y;
        if(a>b){
            printf("Chocolate\n");
        }
        else if(a==b){
            printf("Either\n");
        }
        else{
            printf("Candy\n");
        }
    }
}


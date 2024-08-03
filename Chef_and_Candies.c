#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        if(n<x){
            printf("0\n");
        }
        else if((n-x)%4==0){
            printf("%d\n",(n-x)/4);
        }
        else{
            printf("%d\n",(((n-x)/4)+1));
        }
    }
}


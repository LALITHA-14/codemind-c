#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        int a=n*x;
        int m=((n*x)/4)+1;
        if(a%4==0){
            printf("%d\n",(a/4));
        }
        else{
            printf("%d\n",m);
        }
    }
}


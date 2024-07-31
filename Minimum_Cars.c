#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a=n/4;
        if(n%4==0){
            printf("%d\n",(n/4));
        }
        else{
            printf("%d\n",(n/4)+1);
        }
    }
}


#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int a=4+(3*(n-1));
    if(n==1){
        printf("4");
    }
    else{
        printf("%d",a);
    }
}


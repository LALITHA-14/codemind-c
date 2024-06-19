#include <stdio.h>
int main(void) {
    int x,i;
    scanf("%d",&x);
    if(x%2==0){
        printf("%d",x/2);
    }
    else{
        printf("%d",(x/2)+1);
    }
}


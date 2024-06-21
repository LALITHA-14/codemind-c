#include <stdio.h>
int main(void) {
    int x;
    scanf("%d",&x);
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a+b;
    if(x>=c){
        printf("Yes");
    }
    else {
        printf("No");
    }
}


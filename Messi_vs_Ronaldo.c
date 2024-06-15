#include <stdio.h>
int main(void) {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=(a*2)+b;
    int y=(c*2)+d;
    if(x==y){
        printf("Equal");
    }
    else if(x>y){
        printf("Messi");
    }
    else{
        printf("Ronaldo");
    }
}


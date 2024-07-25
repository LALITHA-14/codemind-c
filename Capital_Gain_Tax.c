#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y){
        printf("INCREASED");
    }
    else if(x>y){
        printf("DECREASED");
    }
    else{
        printf("SAME");
    }
}


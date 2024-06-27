#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
    int x,y;
    scanf("%d%d",&x,&y);
    int a=x*3;
    int b=y*2;
    if(a<b){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
}
}


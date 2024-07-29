#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int max,min;
        if(z>x && z>y && x<y){
            max=z;
            min=x;
        }
        else if(y>x && y>z && z<x){
            max=y;
            min=z;
        }
        else if(x>y && x>z && y<z){
            max=x;
            min=y;
        }
        printf("%d\n",max-min);
}
}


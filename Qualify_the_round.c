#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
    int z,x,y;
    scanf("%d%d%d",&z,&x,&y);
    int a=(x*1)+(y*2);
    if(a>=z){
        printf("Qualify\n");
    }
    else{
        printf("NotQualify\n");
    }
}
}



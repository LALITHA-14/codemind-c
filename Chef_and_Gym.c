#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if((x+y)<=z){
            printf("2\n");
        }
        else if(x>z){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
}


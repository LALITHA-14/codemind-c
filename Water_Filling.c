#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int b1,b2,b3;
        scanf("%d%d%d",&b1,&b2,&b3);
        if(b1==0 && b2==0 && b3==0){
            printf("Water filling time\n");
        }
        else if((b1+b2+b3)>=2){
            printf("Not now\n");
        }
        else {
            printf("Water filling time\n");
        }
    }
}

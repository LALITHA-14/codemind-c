#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        int max=x*y;
        if(n<=max){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        if(y>(2*x)){
            printf("%d\n",((n%2)*x)+((n/2)*y));
        }
        else{
            printf("%d\n",n*x);
        }
    }
}
        


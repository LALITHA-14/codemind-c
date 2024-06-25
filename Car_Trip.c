#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x>=300)
        printf("%d\n",x*10);
        else
        {
            printf("3000\n");
        }
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x>24)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}


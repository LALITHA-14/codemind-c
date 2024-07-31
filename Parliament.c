#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        if(n%2==1){
            if(x>=(n/2)+1)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else{
            if(x>=(n/2))
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
}


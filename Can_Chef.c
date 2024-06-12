#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if((x*15)>=(y*2))
        printf("YES\n");
        else 
        printf("NO\n");
    }
}


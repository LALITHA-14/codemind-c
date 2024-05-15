#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    int c=(x*2)+(y*2);
    if(c>=1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}


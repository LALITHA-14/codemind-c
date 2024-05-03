#include <stdio.h>
int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    int players=x+y;
    if(x>y)
    {
        printf("FREEKICK");
    }
    else if(x<y)
    {
        printf("PENALTY");
    }
}


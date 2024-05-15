#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("New");
    }
    else if(y>x)
    {
        printf("Old");
    }
    else
    {
        printf("Same");
    }
}


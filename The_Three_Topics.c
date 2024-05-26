#include <stdio.h>
int main(void) {
    int a,b,c,x;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    if(a==x || b==x || c==x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}


#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g,b;
        scanf("%d%d",&g,&b);
        printf("%d\n",b-g);
    }
}


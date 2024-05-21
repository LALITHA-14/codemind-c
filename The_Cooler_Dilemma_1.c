#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int a=x*m;
    if(a<y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
}


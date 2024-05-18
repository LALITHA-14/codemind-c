#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int s=x*10;
        int cost=s*z;
    if(s<y){
          printf("%d\n",cost);

    }
    else
    {
        printf("%d\n",y*z);
    }
    }
}


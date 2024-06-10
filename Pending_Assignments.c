#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int total=x*y;
        int t=z*24*60;
        if(total<=t){
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
}


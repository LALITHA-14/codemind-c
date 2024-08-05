#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int a=x*y;
        int b=(x*y)/2;
        if(z>b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}


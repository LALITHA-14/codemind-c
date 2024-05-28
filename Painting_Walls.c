#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int area=x*y;
        int area2=z/2;
        int c=area2/area;
        printf("%d\n",c);
    }
}


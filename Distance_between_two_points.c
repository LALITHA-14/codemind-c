#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4f",d);
}
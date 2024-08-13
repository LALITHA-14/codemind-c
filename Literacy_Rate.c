#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       int p,l;
       scanf("%d%d",&p,&l);
       if(l*100>=75*p)
       {
           printf("YES\n");
       }
       else{
           printf("NO\n");
       }
    }
}


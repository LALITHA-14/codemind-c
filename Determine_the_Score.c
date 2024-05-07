#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    int x,n;
    scanf("%d%d",&x,&n);
    printf("%d\n",(x/10)*n);
}
}

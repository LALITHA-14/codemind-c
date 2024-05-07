#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int chef=a*c;
    int chefina=b*c;
    if(chef>chefina)
    {
        printf("%d",chef);
    }
    else
    {
        printf("%d",chefina);
    }
}



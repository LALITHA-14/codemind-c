#include <stdio.h>
int main(void) {
    int p1,p2,p3,p4;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    int count=0;
    if(p1>=10){
        count++;
    }
    if(p2>=10){
        count++;
    }
    if(p3>=10){
        count++;
    }
    if(p4>=10){
        count++;
    }
    printf("%d\n",count);
}


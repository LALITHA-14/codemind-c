#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int z=(a/b)*c;
        int x=((a/b)+1)*c;
        if(b>=a)
        {
            printf("%d\n",c);
        }
        else if(a%b==0){
            printf("%d\n",z);
        }
        else{
            printf("%d\n",x);
        }
    }
}


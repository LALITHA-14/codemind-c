#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,first_digit,last_digit;
        scanf("%d",&a);
        last_digit=a%10;
        while(a>=10){
            a=a/10;
        }
        first_digit=a;
        printf("%d\n",first_digit+last_digit);
    }
}


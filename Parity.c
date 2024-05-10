#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}


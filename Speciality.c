#include <stdio.h>
int main(void) {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x>y && x>z)
        {
            printf("Setter\n");
        }
        else if(y>x && y>z)
        {
            printf("Tester\n");
        }
        else 
        {
            printf("Editorialist\n");
        }
    }
}


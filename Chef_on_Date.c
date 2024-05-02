#include <stdio.h>

int main(void) {
	// your code goes here
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        printf("YES\n");
    }
   
    else
    {
        printf("NO\n");
    }
}
}

